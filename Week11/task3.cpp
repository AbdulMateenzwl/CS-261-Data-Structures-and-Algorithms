bool cmp(pair<char, int>& a,pair<char, int>& b)
{
    return a.second > b.second;
}
class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char,int>> map(123,{' ',0});
        for(auto a: s)
        {
            map[a].first= a;
            map[a].second+=1;
        }
        sort(map.begin(),map.end(),cmp);
        string str="";
        for(int i=0;i<123;i++)
        {
            {
                for(int m=0;m<map[i].second;m++)
                {
                    str+=map[i].first;
                }
            }
        }
        return str;
    }
};