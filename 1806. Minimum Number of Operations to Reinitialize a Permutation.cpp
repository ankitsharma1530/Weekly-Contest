class Solution {
public:
    int reinitializePermutation(int n) {
        if(n==2)
        {
            return 1;
        }
        if(n==4)
        {
            return 2;
        }
        int count = 0;
        vector<int>pre;
        vector<int>curr;
        for(int i=0;i<n;i++)
        {
            pre.push_back(i);
        }
        for(int i=0;i<n;i++)
        {
            curr.push_back(0);
        }
       
         while(true)
        {
            if(curr[1]==1)
            {
                return count;
            }
            int i=0;
            for(int j=0;j<n;j=j+2)
            {
                curr[j] = pre[i];
                i++;
            }
            for(int jj=1;jj<n;jj=jj+2)
            {
                
                curr[jj]=pre[i];
                i++;
            }
            count++;
            // cout<<pre[0]<<pre[1]<<"   ";
            pre=curr;
            
        }
        return count;
    }
};



