#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <queue>
using namespace std;
unordered_map<int, vector<int>> convert(vector<vector<int>> edges)
{
    unordered_map<int, vector<int>> m;
    for (auto a : edges)
    {
        m[a[0]].push_back(a[1]);
        if (a[0] == a[1])
            continue;
        m[a[1]].push_back(a[0]);
    }
    return m;
}
void display(unordered_map<int, vector<int>> m)
{
    for (auto a : m)
    {
        cout << a.first << " :";
        for (auto b : a.second)
        {
            cout << b<<" ";
        }
        cout << endl;
    }
}
main()
{
    vector<vector<int>> vtr;
    vector<int> vtr1{3, 4};
    vtr.push_back(vtr1);
    vector<int> vtr2{2, 8};
    vtr.push_back(vtr2);
    vector<int> vtr3{2, 1};
    vtr.push_back(vtr3);
    vector<int> vtr4{2, 4};
    vtr.push_back(vtr4);
    display(convert(vtr));
}