class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        heapSort(nums, nums.size());
        return nums;
    }
    void heapSort(vector<int> &heapArr, int size)
    {
        for (int x = (size / 2) - 1; x >= 0; x--)
        {
            heapify(heapArr, size, x);
        }
        for (int x = size - 1; x > 0; x--)
        {
            swap(heapArr[0], heapArr[x]);
            heapify(heapArr, x, 0);
        }
    }
    void heapify(vector<int> &heapArr, int size, int index)
    {
        int maxIndex;
        while (true)
        {
            int lIdx = leftChildIndex(index);
            int rIdx = rightChildIndex(index);
            if (rIdx >= size)
            {
                if (lIdx >= size)
                    return;
                else
                    maxIndex = lIdx;
            }
            else
            {
                if (heapArr[lIdx] >= heapArr[rIdx])
                    maxIndex = lIdx;
                else
                    maxIndex = rIdx;
            }
            if (heapArr[index] < heapArr[maxIndex])
            {
                swap(heapArr[index], heapArr[maxIndex]);
                index = maxIndex;
            }
            else
                return;
        }
    }
    int parentIndex(int i)
    {
        return (i - 1) / 2;
    }
    int leftChildIndex(int i)
    {
        return (2 * i) + 1;
    }
    int rightChildIndex(int i)
    {
        return (2 * i) + 2;
    }
};