bool cmp(pair<string, int>& a,pair<string, int>& b)
{
    if(a.second == b.second)
    {
        if(a.first < b.first)
        {
            return true;
        }
        return false;
    }
    return !(a.second <= b.second);
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> map;
        for(auto a:words)
        {
            map[a]++;
        }
        vector<pair<string,int>> vtp;
        for(auto a:map)
        {
            vtp.push_back({a.first,a.second});
        }
        sort(vtp.begin(),vtp.end(),cmp);
        vector<string> vtr;
        for(int i=0;i<k;i++){
            vtr.push_back(vtp[i].first);
        }
        return vtr;
    }
};