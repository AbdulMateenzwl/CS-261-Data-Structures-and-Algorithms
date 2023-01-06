class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        quickSort(nums,0,nums.size()-1);
        return nums[nums.size()-k];
    }
    void quickSort(vector<int> &arr, int start, int end)
    {
        if (start < end)
        {
            int pivot = start;
            int mid = partition(arr, start + 1, end, pivot);
            quickSort(arr, start, mid - 1);
            quickSort(arr, mid + 1, end);
        }
    }
    int partition(vector<int> &arr, int start, int end, int pivot)
    {
        int left = start;
        int right = end;
        while (left <= right)
        {
            while (left <= end && arr[left] < arr[pivot] )
                left++;
            while (right >= start && arr[right] >= arr[pivot] )
                right--;
            if (left < right)
                swap(arr[left], arr[right]);
        }
        swap(arr[right], arr[pivot]);
        return right;
    }

};