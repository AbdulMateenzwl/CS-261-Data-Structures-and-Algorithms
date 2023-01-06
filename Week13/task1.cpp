class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return n;
        map<int,int> map1;
        map<int,bool> p; 
        for(int i=0;i<trust.size();i++)
        {
            map1[trust[i][1]]++;
            p[trust[i][0]]=true;
        }
        for(auto a:map1)
        {
            if(a.second == n-1)
            {
                if(p[a.first]!=true)    
                    return a.first;
            }
        }
        return -1;
    }
};