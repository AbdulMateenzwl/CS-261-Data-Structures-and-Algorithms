class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map;
        for(auto e:magazine)
        {
            if(map.find(int(e))==map.end())
            {
                map.emplace(int(e),1);
            }
            else
            {
                map.find(int(e))->second++;
            }
        }
        for(auto m:ransomNote)
        {
            if(map.find(int(m))==map.end())
            {
                return false;
            }
            else
            {
                
                map.find(int(m))->second--;
                if(map.find(int(m))->second==-1)
                {
                    return false;
                }
            }
        }
        return true;
    }
};