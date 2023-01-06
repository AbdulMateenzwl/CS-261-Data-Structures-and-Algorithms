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
    int maxDepth(TreeNode* root) {
        if (root == NULL)
        {
            return 0;
        }

        queue<TreeNode *> queueNode;
        queueNode.push(root);
        int depth=0;
        while (!queueNode.empty())
        {
            vector<int> levelRow;
            int n = queueNode.size();

            for (int i = 0; i < n; i++)
            {
                TreeNode *current = queueNode.front();
                queueNode.pop();
                if (current->left != NULL)
                {
                    queueNode.push(current->left);
                }
                if (current->right != NULL)
                {
                    queueNode.push(current->right);
                }
            }

            depth++;
            
        }


        return depth;
    }
};