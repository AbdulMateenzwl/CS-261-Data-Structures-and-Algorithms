class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
        {
            return ans;
        }

        queue<TreeNode *> queueNode;
        queueNode.push(root);

        while (!queueNode.empty())
        {
            vector<int> levelRow;
            int n = queueNode.size();

            for (int i = 0; i < n; i++)
            {
                TreeNode *current = queueNode.front();
                queueNode.pop();
                levelRow.push_back(current->val);
                if (current->left != NULL)
                {
                    queueNode.push(current->left);
                }
                if (current->right != NULL)
                {
                    queueNode.push(current->right);
                }
            }


            if (!levelRow.empty())
            {
                ans.push_back(levelRow);
            }
        }


        return ans;
    }
};