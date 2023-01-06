#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
void merge(vector<int> &arr, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    queue<int> tempArr;
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            tempArr.push(arr[i]);
            i++;
        }
        else
        {
            tempArr.push(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        tempArr.push(arr[i]);
        i++;
    }
    while (j <= end)
    {
        tempArr.push(arr[j]);
        j++;
    }
    for (int x = start; x <= end; x++)
    {
        arr[x] = tempArr.front();
        tempArr.pop();
    }
}

vector<int> mergeSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
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
    vector<int> vtr{2, 3, 5, 7, 4, 6, 3, 13};
    display(vtr);
    vtr = mergeSort(vtr, 0, vtr.size() - 1);
    cout << endl;
    display(vtr);
}