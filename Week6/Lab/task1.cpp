class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        int n =nums.size();
        if(n==1)
            return {"Gold Medal"};
        unordered_map<int,int> mp{};
        int i{};
        for(auto num:nums){
            mp[num]=i;
            ++i;
        }
        sort(nums.begin(),nums.end());
        vector<string> ans(n,"");
        
        for(i=0;n-i>3;++i){
            ans[mp[nums[i]]]=to_string(n-i);
        }
        if(n>2)
            ans[mp[nums[n-3]]]="Bronze Medal";
        ans[mp[nums[n-2]]]="Silver Medal";
        ans[mp[nums[n-1]]]="Gold Medal";
        
        
        return ans;
    }
};