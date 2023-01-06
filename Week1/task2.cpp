#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findPeakElement(vector <int>& nums) {
        int start=0;
        int end=nums.size();
        while(start<end)
        {
            int mid=(start+end)/2;
            if(nums[mid]>nums[mid+1])
            {
                end=mid;
            }    
            else
            {
                start=mid+1;
            }    
        }
        return start;
    }
};

main()
{
    Solution a;
    vector<int> v={11,2,3};
    cout<<a.findPeakElement(v);
}