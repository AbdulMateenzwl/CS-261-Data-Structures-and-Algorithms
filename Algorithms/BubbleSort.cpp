#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
vector<int> BubbleSort(vector<int> vtr)
{
    bool flag = true;
    for (int m = 0; m < vtr.size(); m++)
    {
        for (int i = 0; i < vtr.size() - i - 1; i++)
        {
            if (vtr[i] > vtr[i + 1])
            {
                swap(vtr[i], vtr[i + 1]);
                flag = false;
            }
        }
        if (flag)
            break;
    }
    return vtr;
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
    vector<int> vtr{2, 3, 5, 2, 4, 2, 1};
    display(vtr);
    vtr = BubbleSort(vtr);
    cout << endl;
    display(vtr);
}