#include <queue>
#include <iostream>
using namespace std;
int tickets(vector<int> &tickets, int k)
{
    int seconds = 0;
    while (tickets[k] > 0)
    {
        for (int j = 0; j < tickets.size(); j++)
        {
            if(tickets[k]==0)
            {
                return seconds;
            }
            if (tickets[j] > 0)
            {
                tickets[j] -= 1;
                seconds++;
            }
        }
    }
    return seconds;
}
main()
{
    vector<int> s;
    s.push_back(2);
    s.push_back(3);
    s.push_back(2);

    cout << tickets(s, 1);
}