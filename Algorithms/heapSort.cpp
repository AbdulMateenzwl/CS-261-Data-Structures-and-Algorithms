#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
void heapify(vector<int> &heapArr, int size, int index)
{
    int maxIndex;
    while (true)
    {
        int lIdx = index * 2 + 1;
        int rIdx = index * 2 + 2;
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

vector<int> heapSort(vector<int> arr)
{
    for (int x = (arr.size() / 2) - 1; x >= 0; x--)
    {
        heapify(arr, arr.size(), x);
    }
    for (int x = arr.size() - 1; x > 0; x--)
    {
        swap(arr[0], arr[x]);
        heapify(arr, x, 0);
    }
    return arr;
}

void display(vector<int> vtr)
{
    for (auto a : vtr)
    {
        cout << a << " ";
    }
    cout << endl;
}
main()
{
    vector<int> vtr{3, 2, 5, 2, 4, 2, 1};
    display(vtr);
    vtr = heapSort(vtr);
    cout << endl;
    display(vtr);
}