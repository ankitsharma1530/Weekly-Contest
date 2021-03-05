class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<double>res;
        while(1)
        {
            int size = q.size();
            int d = size;
            if(size==0)
            {
                break;
            }
            double temp=0;
            while(size--)
            {
                TreeNode* curr = q.front();
                q.pop();
                temp=temp+curr->val;
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
            }
            res.push_back(temp/d);
        }
        return res;
    }
};
