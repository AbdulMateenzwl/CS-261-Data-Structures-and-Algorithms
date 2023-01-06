/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }

        queue<TreeNode *> queueNode;
        queueNode.push(root);

        while (!queueNode.empty())
        {
            int n = queueNode.size();
            long double num =pow(-2,31);
            for (int i = 0; i < n; i++)
            {
                TreeNode *current = queueNode.front();
                queueNode.pop();
                if(current->val>num)
                {
                    num=current->val;
                }
                if (current->left != NULL)
                {
                    queueNode.push(current->left);
                }
                if (current->right != NULL)
                {
                    queueNode.push(current->right);
                }
            }
            

            
            ans.push_back(num);
            
        }


        return ans;
    }
};