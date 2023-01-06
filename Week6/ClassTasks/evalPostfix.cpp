#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

int evaluatePostfix(string exp)
{
    int i;
    stack<char> stk;
    if (exp == "")
        return -1;

    for (i = 0; exp[i]; ++i)
    {
        if (isdigit(exp[i]))
        {
            stk.push(exp[i]-'0');
        }
        else
        {
            int val1 = stk.top();
            stk.pop();
            int val2 = stk.top();
            stk.pop();
            if (exp[i] == '+')
            {
                stk.push(val1 + val2);
            }
            else if (exp[i] == '-')
            {
                stk.push(val1 - val2);
            }
            else if (exp[i] == '*')
            {
                stk.push(val1 * val2);
            }
            else if (exp[i] == '/')
            {
                stk.push(val1 / val2);
            }
        }
    }
    return stk.top();
}

int main()
{
    string exp = "231*+9+";
    cout << "postfix evaluation: " << evaluatePostfix(exp);
    return 0;
}
