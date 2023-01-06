#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;
vector<int> countSort(vector<int> arr)
{
    int max = *max_element(arr.begin(), arr.end());
    vector<int> count(max + 1);
    vector<int> output(arr.size());
    for (int x = 0; x < arr.size(); x++)
    {
        count[arr[x]]++;
    }
    for (int x = 1; x < count.size(); x++)
    {
        count[x] = count[x - 1] + count[x];
    }
    for (int x = arr.size() - 1; x >= 0; x--)
    {
        int index = count[arr[x]] - 1;
        count[arr[x]]--;
        output[index] = arr[x];
    }
    return output;
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
    vtr = countSort(vtr);
    cout << endl;
    display(vtr);
}
