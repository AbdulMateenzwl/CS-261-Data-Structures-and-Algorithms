class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL)
        {
            return root;
        }
        
        queue<Node *> q;
        q.push(root);

        while (q.size()>0)
        {
            Node *ty=NULL;
            int n=q.size();
            
            for (int i = 0; i < n; i++)
            {
                Node *current = q.front();
                q.pop();
                
                if(i==0)
                {
                    ty=current;
                }
                else 
                {
                    ty->next=current;
                    ty=current;
                }
                if (current->left != NULL)
                {
                    q.push(current->left);
                }
                if (current->right != NULL)
                {
                    q.push(current->right);
                }
            }

        }


        return root;
    }
};