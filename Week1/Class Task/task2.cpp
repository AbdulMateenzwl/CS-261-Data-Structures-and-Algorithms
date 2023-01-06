#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Stack
{
    struct node *top;

public:
    Stack()
    {
        top = NULL;
    }
    int get_last()
    {
        if (top != NULL)
        {
            struct node *temp;
            temp = top;
            return temp->data;
        }
    }
    int pop()
    {
        if (top != NULL)
        {
            struct node *temp;
            temp = top;
            top = top->next;
            int item = temp->data;
            delete temp;
            return item;
        }
    }
    bool push(int item)
    {
        struct node *record = new node();
        record->data = item;
        record->next = top;
        top = record;
        return true;
    }
};

class Solution
{
public:
    bool isValid(string s)
    {

        // stack data
        Stack stk;

        for (int x = 0; x < s.length(); x++)
        {
            int num = encode(s[x]);
            if (num > 0)
            {
                stk.push(num);
            }
            else
            {
                if(stk.get_last()+num==0)
                {
                    stk.pop();
                }
                else
                {
                    stk.push(num);
                }
            }
        }
        return (stk.get_last()==0);
        
    }
    int encode(char ch)
    {
        if (ch == '(')
        {
            return 1;
        }
        else if (ch == ')')
        {
            return -1;
        }
        else if (ch == '{')
        {
            return 2;
        }
        else if (ch == '}')
        {
            return -2;
        }
        else if (ch == '[')
        {
            return 3;
        }
        else if (ch == ']')
        {
            return -3;
        }
        return 0;
    }
};

main()
{
    Solution s;
    string str="({}[])";
    cout<<s.isValid(str);
}