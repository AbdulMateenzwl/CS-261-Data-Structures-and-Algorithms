class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=difficulty.size();
        vector<pair<int,int>> diff;
        for(int i=0;i<n;i++){
            diff.push_back({difficulty[i],profit[i]});
        } 
        sort(diff.begin(),diff.end());
        sort(worker.begin(),worker.end());      
        int m=worker.size();
        int i=0;
        int sum=0;
        int j=0;
        int maxi=0;
        while( i<m)
        {
            while(j<n && diff[j].first <= worker[i] )
            {
                maxi=max(diff[j].second,maxi);
                j++;
            }
            sum+=maxi;
                i++; 
        }
        
        return sum;
    }
};