class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> qu;
        for(int i=0;i<nums.size();i++)
        {
            qu.push(nums[i]);
        }
        int i=1;
        while(i<k)
        {
            qu.pop();
            i++;
        }
        return qu.top();
    }
};