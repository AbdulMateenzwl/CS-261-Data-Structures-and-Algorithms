class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=nums.size();
		while(i<j)
		{
			if(nums[i]%2==1)
			{
                int num=nums[i];
				nums.erase(nums.begin()+i);
				nums.push_back(num);
				j--;
			}
			else
				i++;
		}
        return nums;
    }
};