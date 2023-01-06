#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
void merge(vector<int> &arr, int l, int m, int r)
{
    int k;
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L;
    vector<int> R;

    for (int i = 0; i < n1; i++)
        L.push_back(arr[l + i]);
    for (int j = 0; j < n2; j++)
        R.push_back(arr[m + 1 + j]);

    int i = 0;
    int j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
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
    vector<int> vtr{2, 3, 5, 2, 4, 2, 1, 3};
    display(vtr);
    vtr=mergeSort(vtr, 0, vtr.size());
    cout << endl;
    display(vtr);
}