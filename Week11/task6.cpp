class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            vector<string> st=nums;
            int k=queries[i][0],trim=queries[i][1];
            priority_queue<pair<string,int>> maxh;
            for(int i=0;i<st.size();i++) {
                maxh.push({st[i].substr(st[i].length()-trim),i});
                if(maxh.size()>k) maxh.pop();
            }
            ans.push_back(maxh.top().second);
        }
        return ans;
    }
};