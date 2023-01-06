#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

void radixCounting(vector<int> &arr, int place)
{
    vector<int> count(10);
    vector<int> output(arr.size());
    for (int x = 0; x < arr.size(); x++)
    {
        count[(arr[x] / place) % 10]++;
    }
    for (int x = 1; x < count.size(); x++)
    {
        count[x] = count[x - 1] + count[x];
    }
    for (int x = arr.size() - 1; x >= 0; x--)
    {
        int index = count[(arr[x] / place) % 10] - 1;
        count[(arr[x] / place) % 10]--;
        output[index] = arr[x];
    }
    for (int x = 0; x < output.size(); x++)
    {
        arr[x] = output[x];
    }
}

vector<int> radixSort(vector<int> arr)
{
    int max = *max_element(arr.begin(), arr.end());
    int place = 1;
    while ((max / place) > 0)
    {
        radixCounting(arr, place);
        place = place * 10;
    }
    return arr;
}
void display(vector<int> vtr)
{
    for (auto a : vtr)
    {
        cout << a << " " ;
    }
    cout<<endl;
}
main()
{
    vector<int> vtr{3, 2, 5, 2, 4, 2, 1};
    display(vtr);
    vtr = radixSort(vtr);
    cout << endl;
    display(vtr);
}
