class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& vtr) {
        
        ///////////////  Bubble Sort      //   350ms || 5%
        bool flag = true;
        for (int m = 0; m < vtr.size(); m++)
        {
            for (int i = 0; i < vtr.size() - m - 1; i++)
            {
                if (vtr[i] < vtr[i + 1])
                {
                    swap(vtr[i], vtr[i + 1]);
                    swap(names[i] , names[i+1]);
                    flag = false;
                }
            }
            if (flag)
                break;
        }
        return names;
        
        
        //////////// Selection Sort       //  204ms || 7%
        int min=0;
        for (int m = 0; m < vtr.size(); m++)
        {
            min=m;
            for (int i = m+1; i < vtr.size(); i++)
            {
                if (vtr[i] > vtr[min] )
                {
                    min=i;
                }
            }
            swap(vtr[m],vtr[min]);
            swap(names[m],names[min]);
            min=0;
        }
        return names;
        
        ////////// Insertion Sort     // 130ms  || 12%

        for (int m = 1; m <= vtr.size(); m++)
        {
            for (int i = m-1; i > 0; i--)
            {
                if (vtr[i-1] < vtr[i])
                {
                    swap(vtr[i-1], vtr[i]);
                    swap(names[i-1],names[i]);
                }
                else
                    break;
            }
        }
        return names;
    }
};