class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> map;
        vector<string> vtr;
        for(int i=0;i<s.length();i++)
        {
            string sub=s.substr(i,10);
             if(map[sub]!=-1)
             {
                 map[sub]++;
             }
            if(map[sub]>1)
            {
                vtr.push_back(sub);
                map[sub]=-1;
            }
        }
        return vtr;
    }
};