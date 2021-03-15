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
    long long ans = 0;
    void compute(TreeNode* root,int total_sum)
    {
        if(root==NULL)
        {
            return;
        }
        compute(root->left,total_sum);
        compute(root->right,total_sum);
        if(ans<((long long)(total_sum-root->val)*(long long)root->val))
        {
            ans =(long long)(total_sum-root->val)*(long long)root->val;
        }
    }
    int add_sum(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left = add_sum(root->left);
        int right = add_sum(root->right);
        root->val = root->val+left+right;
        return root->val;
    }
    int maxProduct(TreeNode* root) {
        // find the sum of the tree at every node
        // basically we will make a sum tree
        int total_sum = add_sum(root);
        compute(root,total_sum);
        return ans%1000000007;
    }
};
