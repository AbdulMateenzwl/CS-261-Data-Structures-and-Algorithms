#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string>
using namespace std;
bool isDigit(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return true;
    }
    return false;
}
int calculate(string s)
{
    string num="";
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            num+=s[i];
        }
        i++;
    }
}
int clc(string str)
{
    vector<int> vtr;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='+')
        {
            int num1=vtr.back();            
            vtr.pop_back();
            int num2=vtr.back();            
            vtr.pop_back();
            vtr.push_back(num1+num2);
        }
    }
    
}

main()
{
    cout<<isDigit('1');
}