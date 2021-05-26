int ans;
int go(Tree* root) {
    if (!root) return 0;
    int val = go(root->left) + go(root->right) + root->val;
    ans = max(ans, val);
    return val;
}
int solve(Tree* root) {
    ans = 0;
    go(root);
    return ans;
}
