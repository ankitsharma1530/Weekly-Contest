/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root, vector<string>& moves) {
    stack<Tree*>st;
    st.push(root);
    for(int i=0;i<moves.size();i++)
    {
        if(moves[i]=="RIGHT")
        {
            root = root->right;
            st.push(root);
        }
        else if(moves[i]=="LEFT")
        {
            root = root->left;
            st.push(root);
        }
        else
        {
            st.pop();
            root = st.top();
        }
    }
    return st.top()->val;
}
