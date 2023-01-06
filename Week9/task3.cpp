class Solution {
public:
    int findContentChildren(vector<int>& vtr, vector<int>& s) {
        // for (int m = 1; m <= vtr.size(); m++)
        // {
        //     for (int i = m-1; i > 0; i--)
        //     {
        //         if (vtr[i-1] > vtr[i])
        //         {
        //             swap(vtr[i-1], vtr[i]);
        //         }
        //         else
        //             break;
        //     }
        // }
        // for (int m = 1; m <= s.size(); m++)
        // {
        //     for (int i = m-1; i > 0; i--)
        //     {
        //         if (s[i-1] > s[i])
        //         {
        //             swap(s[i-1], s[i]);
        //         }
        //         else
        //             break;
        //     }
        // }

        //          Mam the insertion sort was working fine for fine amount of elements but for large it failed. So i used Merge sort

        sort(vtr.begin(),vtr.end());
        sort(s.begin(),s.end());
        int num=0,count=0;
        for(int i=0;i<vtr.size();)
        {
            if(num==s.size())
                break;
            if(vtr[i]<=s[num])
            {
                count++;
                i++;
            }
            num++;
        }
        return count;
    }
};