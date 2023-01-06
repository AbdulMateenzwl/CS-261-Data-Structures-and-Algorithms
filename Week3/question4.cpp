class Solution
{
public:
    vector<double> averageOfLevels(TreeNode *root)
    {
        vector<double> ans;
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
            double num=0.0;
            for (int i = 0; i < n; i++)
            {
                TreeNode *current = queueNode.front();
                queueNode.pop();
                num+=current->val;
                if (current->left != NULL)
                {
                    queueNode.push(current->left);
                }
                if (current->right != NULL)
                {
                    queueNode.push(current->right);
                }
            }
            

            
            ans.push_back(num/n);
            
        }


        return ans;
    }
};