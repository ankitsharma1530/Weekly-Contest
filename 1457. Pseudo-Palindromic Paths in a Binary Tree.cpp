class Solution {
public:
    int count = 0;
    int arr[10]={0};
    void dfs(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        if(root!=NULL)
        {
            arr[root->val]++;
            if(root->left==NULL && root->right==NULL)
            {
                int explain = 0;
                for(int i=1;i<=9;i++)
                {
                    if(arr[i]%2!=0)
                    {
                        explain++;
                    }
                }
                if(explain<=1)
                {
                    count++;
                }
            }
            
            dfs(root->left);
            dfs(root->right);
            arr[root->val]--;
        }
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        // memset(arr,0,sizeof(arr));
        dfs(root);
        return count;
    }
};
