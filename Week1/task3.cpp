#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int start=0;
        int end=nums.size();
        int mid=0;
        if(nums[0]==target)
        {
            return 0;
        }
        while(start<end)
        {
            mid=(start+end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid;
            }
        }
        return -1;
    }
};
main(){
    Solution a;
    vector<int> h={1,3,5,7,8,9,11,14,25};
    cout<<a.search(h,7);
}