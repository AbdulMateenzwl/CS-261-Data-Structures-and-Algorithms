#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
string postorderTraversal(TreeNode *root)
{
    stack<TreeNode *> stk;
    string str="";
    stack<int> stk2;
    if (root == NULL)
        return str;
    stk.push(root);
    while (!stk.empty())
    {
        TreeNode *current = stk.top();
        stk.pop();
        stk2.push(current->val);
        if (current->left != NULL)
        {
            stk.push(current->left);
        }
        if (current->right != NULL)
        {
            stk.push(current->right);
        }
    }
    while (!stk2.empty())
    {
        str = str + to_string(stk2.top());
        stk2.pop();
    }
    return str;
}
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
            stk.push(exp[i] - '0');
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
main()
{
}