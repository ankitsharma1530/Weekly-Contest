class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int level = 0;
        while(!q.empty())
        {
            if(level%2!=0)
            {
                int size = q.size();
                int check_num = INT_MAX;
                for(int i=0;i<size;i++)
                {
                    TreeNode* temp = q.front();
                    q.pop();
                    
                    if(temp->val%2!=0 || temp->val>=check_num)
                    {
                        return false;
                    }
                    check_num = temp->val;
                    if(temp->left)
                    {
                        q.push(temp->left);
                    }
                    if(temp->right)
                    {
                        q.push(temp->right);
                    }
                }
            }
            else
            {
                int size = q.size();
                int check_num = INT_MIN;
                for(int i=0;i<size;i++)
                {
                    TreeNode* temp = q.front();
                    q.pop();
                    
                    if(temp->val%2==0 || temp->val<=check_num)
                    {
                        return false;
                    }
                    check_num = temp->val;
                    if(temp->left)
                    {
                        q.push(temp->left);
                    }
                    if(temp->right)
                    {
                        q.push(temp->right);
                    }
                }
            }
            level++;
        }
        return true;
    }
};
