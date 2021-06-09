/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
    queue<Tree*>q;
    q.push(root);
    int i=0;
    vector<int>res;
    while(!q.empty()){
        int size = q.size();
        vector<int>temp;
        while(size--){
            
            Tree* curr = q.front();
            q.pop();
            temp.push_back(curr->val);
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        if(i&1){
            reverse(temp.begin(),temp.end());
        }
        for(auto x:temp){
            res.push_back(x);
        }
        i++;
    }

    return res;
}
