class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> v={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> vtr;
        if(digits=="")
        {
            return vtr;
        }
        vtr.push_back("");
        for(auto a:digits)
        {
            int i=int(a)-48;
            vector<string> vtr2;
            for(auto b:v[i])
            {
                for(auto x:vtr)
                {
                    vtr2.push_back(x+b);
                }
            }
            swap(vtr,vtr2);
            
        }
        return vtr;
    }
};