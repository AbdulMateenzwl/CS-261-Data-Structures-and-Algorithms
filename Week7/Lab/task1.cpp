class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> map;
        for(int i=0;i<candyType.size();i++)
        {
            if(map.find(candyType[i])==map.end())
            {
                map.emplace(candyType[i],1);
            }
            else
            {
                map.find(candyType[i])->second++;
            }
        }
        return min(map.size(),candyType.size()/2);
    }
};