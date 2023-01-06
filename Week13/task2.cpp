class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> map;
        for(auto a : edges){
            map[a[0]]++;
            map[a[1]]++;
        }
        int max=0;
        for(auto a:map){
            if(a.second>max){
                max=a.first;
            }
        }
        return max;
    }
};