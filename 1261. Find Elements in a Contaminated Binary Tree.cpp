class FindElements {
public:
    unordered_set<int>s;
    void solve(TreeNode* root,int v)
    {
        if(root==NULL)
        {
            return;
        }
        s.insert(v);
        solve(root->left,2*v+1);
        solve(root->right,2*v+2);
    }
    FindElements(TreeNode* root) {
        solve(root,0);
    }
    
    bool find(int target) {
        if(s.find(target)!=s.end())
        {
            return true;
        }
        return false;
    }
};
