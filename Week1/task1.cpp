#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int large=0;
        int slarge=0;
        for(int i=0; i< nums.size();i++)
        {
            if(nums[i]>large)
            {
                slarge=large;
                large=nums[i];
            }
            else if(nums[i]>slarge)
            {
                slarge=nums[i];
            }
        }
        return (large-1)*(slarge-1);
    }
};