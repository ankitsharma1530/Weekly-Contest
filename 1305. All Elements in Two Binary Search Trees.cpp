class Solution {
public:
    void dfs(TreeNode* root,vector<int>& res)
    {
        if(root==NULL)
        {
            return;
        }
        dfs(root->left,res);
        dfs(root->right,res);
        res.push_back(root->val);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>res;
        dfs(root1,res);
        dfs(root2,res);
        sort(res.begin(),res.end());
        return res;
    }
};
