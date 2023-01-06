class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int origSum=(nums.size()*(nums.size()+1))/2; 
        int sum=0;
        int x=0; 
		
        unordered_map<int,int> a;
        for(int e:nums){
           a[e]++;
           sum+=e;
           if(a[e]==2){
               x=e;
           }
        }
        return {x,origSum-sum+x}; 
    }
};