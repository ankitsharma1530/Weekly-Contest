// RECURSIVE CODE

class Solution {
public:
    vector<int>res;
    void solve(Node* root)
    {
        if(root==NULL)
        {
            return;
        }
        res.push_back(root->val);
        for(int i=0;i<root->children.size();i++)
        {
            solve(root->children[i]);
        }
    }
    vector<int> preorder(Node* root) {
        solve(root);
        return res;
    }
};
