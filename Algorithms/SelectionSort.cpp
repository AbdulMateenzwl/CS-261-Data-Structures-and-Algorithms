#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
vector<int> SelectionSort(vector<int> vtr)
{
    int min=0;
    for (int m = 0; m < vtr.size(); m++)
    {
        min=m;
        for (int i = m+1; i < vtr.size(); i++)
        {
            if (vtr[i] < vtr[min] )
            {
                min=i;
            }
        }
        swap(vtr[m],vtr[min]);
        min=0;
    }
    return vtr;
}
void display(vector<int> vtr)
{
    for (auto a : vtr)
    {
        cout << a << " ";
    }
    cout<<endl;
}
main()
{
    vector<int> vtr{2, 3, 5, 2, 4, 2, 1,3};
    display(vtr);
    vtr = SelectionSort(vtr);
    cout << endl;
    display(vtr);
}