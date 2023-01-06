#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[start];
    int i = start+1;
    int j = end;
    do
    {
        while (pivot >= arr[i])
        {
            i++;
        }
        while (pivot < arr[j])
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    } while (i < j);
    swap(arr[start], arr[j]);
    return j;
}

vector<int> quickSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int pivot = partition(arr, l, r);
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, r);
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
    vtr = quickSort(vtr, 0, vtr.size() - 1);
    cout << endl;
    display(vtr);
}