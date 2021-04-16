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
    // fundtion to find the node
    TreeNode* find(TreeNode* root,int x)
    {
        TreeNode* temp = NULL;
        if(root)
        {
            if(root->val==x)
                temp = root;
            else
            {
            temp = find(root->left,x);
            if(!temp)
            temp = find(root->right,x);
            }
        }
        return temp;
    }
    // function that will count the number of nodes
    void dfs(TreeNode* root,int& o)
    {
        if(root==NULL)
        {
            return;
        }
        dfs(root->left,o);
        dfs(root->right,o);
        o++;
        
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        // we will count the left,right and parent nodes
        int l = 0; // left node
        int r = 0; // right node
        int p = 0; // parent node
        int ans = 0;
        // first of all find the relative node for val X
        TreeNode* temp = find(root,x);
        // find left nodes to the temp
        dfs(temp->left,l);
        // find right nodes to the temp
        dfs(temp->right,r);
        cout<<l<<" "<<r;
        ans = max(l,r);
        // see there is an edge case
        // that if our temp node is the root node itdelf
        // than for temp node no parent will be there
        // we have check for only left and right nodes for the case of root node
        if(temp->val!=root->val)
        {
            p = n-(l+r+1);
        }
        ans = max(p,ans);
        if(ans>n-ans)
            return true;
        return false;
    }
};
