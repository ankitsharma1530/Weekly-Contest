/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root) {
    queue<Tree*>q;
    q.push(root);
    int l = 0;
    vector<int>v;
    while(!q.empty()){
        int size = q.size();
        l++;
        while(size--){
            Tree* curr = q.front();
            q.pop();
            if(!curr->left and curr->right==NULL){
                if(v.size()==0){
                    v.push_back(l);
                }
                else{
                    if(v[0]!=l){
                        return false;
                    }
                }
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
    }
    return true;
}
