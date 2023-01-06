#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
vector<int> InsertionSort(vector<int> vtr)
{
    for (int m = 1; m <= vtr.size(); m++)
    {
        for (int i = m-1; i > 0; i--)
        {
            if (vtr[i-1] > vtr[i])
            {
                swap(vtr[i-1], vtr[i]);
            }
            else
                break;
        }
    }
    return vtr;
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
    vtr = InsertionSort(vtr);
    cout << endl;
    display(vtr);
}