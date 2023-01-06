#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
vector<vector<int>> get(vector<vector<int>> vtr)
{
    for (int i = 0; i < vtr.size(); i++)
    {
        for (int row = 0; row < vtr.size(); row++)
        {
            for (int col = 0; col < vtr[row].size(); col++)
            {
                // if (row == i || col == i)
                //     continue;
                if (vtr[row][col] > vtr[row][i] + vtr[i][col])
                {
                    vtr[row][col] = vtr[row][i] + vtr[i][col];
                }
            }
        }
    }
    return vtr;
}

vector<vector<int>> convert(vector<vector<int>> vtr)
{
    vector<vector<int>> ans;
    for (auto a : vtr)
    {
        vector<int> v(vtr.size(), 214734563);
        for(int i=0;i<vtr.size();i++){
            
        }
        ans.push_back(v);
    }
    for (int i = 0; i < vtr.size(); i++)
    {
        ans[vtr[i][0]][vtr[i][1]] = vtr[i][2];
        ans[vtr[i][1]][vtr[i][0]] = vtr[i][2];
    }
    return ans;
}
main()
{
    // vector<vector<int>> vtr;
    // vtr.push_back({0, 2, 214734563, 214734563, 8});
    // vtr.push_back({2, 0, 3, 214734563, 2});
    // vtr.push_back({214734563, 3, 0, 1, 214734563});
    // vtr.push_back({214734563, 214734563, 1, 0, 1});
    // vtr.push_back({8, 2, 214734563, 1, 0});

    // for (auto a : vtr)
    // {
    //     for (auto b : a)
    //     {
    //         cout << b << "  ";
    //     }
    //     cout << endl;
    // }

    // cout << endl;
    // vtr = get(vtr);
    // for (auto a : vtr)
    // {
    //     for (auto b : a)
    //     {
    //         cout << b << "  ";
    //     }
    //     cout << endl;
    // }
    vector<vector<int>> vtr;
    vtr.push_back({0, 1, 2});
    vtr.push_back({0, 4, 8});
    vtr.push_back({1, 2, 3});
    vtr.push_back({1, 4, 2});
    vtr.push_back({2, 3, 1});
    vtr.push_back({3, 4, 1});
    vtr=convert(vtr);
    vtr = get(vtr);
    for (auto a : vtr)
    {
        for (auto b : a)
        {
            cout << b << "  ";
        }
        cout << endl;
    }
}