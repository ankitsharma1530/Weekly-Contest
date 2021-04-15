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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int l = 0;
        int ans = 1;
        int res = root->val;
        while(!q.empty())
        {
            int size = q.size();
            if(size==0)
            {
                break;
            }
            l++;
            int t = 0;
            while(size--)
            {
                TreeNode* curr = q.front();
                q.pop();
                t = t+curr->val;
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
            }
            if(t>res)
            {
                res = t;
                ans = l; 
            }
            
        }
        return ans;
    }
};
