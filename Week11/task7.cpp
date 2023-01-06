class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> win;
        map<int,int> lose;
        vector<vector<int>> vtr;
        vector<int> vtr1;
        vector<int> vtr2;
        vtr.push_back(vtr1);
        vtr.push_back(vtr2);
        for(int i=0;i<matches.size();i++){
            win[matches[i][0]]++;
            lose[matches[i][1]]++;
        }
        for(auto a:win)
        {
            if(lose[a.first]==0)
            {
                vtr[0].push_back(a.first);
            }
        }
        for(auto a:lose){
            if(lose[a.first] == 1)
            {
                vtr[1].push_back(a.first);
            }
        }
        return vtr;
    }
};