class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int> map;
        for(auto a: trips)
        {
            map[a[1]]+=a[0];
            map[a[2]]-=a[0];
        }
        int np=0;
        for( auto &a:map)
        {
            np+=a.second;
            if(np>capacity)
                return false;
        }
        return true;
    }
};


