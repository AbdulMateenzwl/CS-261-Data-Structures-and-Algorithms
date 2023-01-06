#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int points(vector<string>& operations)
{
    stack<int> s;
    int score=0;
    for(int i=0;i<operations.size();i++)
    {
        if(operations[i] != "C" && operations[i] != "D" && operations[i] != "+")
        {
            int value=stoi(operations[i]);
            s.push(value);
        }
        else if(operations[i]=="C")
        {
            s.pop();
        }
        else if(operations[i]=="D")
        {
            s.push(s.top()*2);
        }
        else if(operations[i]=="+")
        {
            int last=s.top();
            s.pop();
            int slast=s.top();
            s.push(last);
            s.push(last+slast);
        }
    }
    while(!s.empty())
    {
        score+= s.top();
        s.pop();
    }
    return score;
}
main()
{
    vector<string> m;
    m.push_back("5");
    m.push_back("2");
    m.push_back("C");
    m.push_back("D");
    m.push_back("+");
    cout<<points(m);
}