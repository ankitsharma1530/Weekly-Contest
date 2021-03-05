class Solution {
public:
    int sum = 0;
    void dfs(TreeNode* root, int h)
    {
        if(root==NULL)
        {
            return;
        }
        
        if(h==0)
        {
            sum=sum+root->val;
        }
        dfs(root->left,h-1);
        dfs(root->right,h-1);
        
    }
    int solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return 1+max(solve(root->left),solve(root->right));
    }
    int deepestLeavesSum(TreeNode* root) {
        int h = solve(root);
        dfs(root,h-1);
        return sum;
    }
};
