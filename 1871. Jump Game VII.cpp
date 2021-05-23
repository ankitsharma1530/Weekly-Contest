class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n = s.length();
        if(s[n-1]!='0')
        {
            return false;
        }
        queue<int>q;
        vector<bool>vis(n,false);
        vis[0] =true;
        q.push(0);
        int curr = 0;
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                int node = q.front();
                q.pop();
                if(node==n-1)
                {
                    return true;
                }
                // vis[node] = true
                
                for(int i=max(node+minJump,curr);i<=min(n-1,node+maxJump);i++)
                {
                    if(s[i]=='0' && vis[i]==false)
                    {
                        vis[i] = true;
                        q.push(i);
                    }
                }
                // this is to avoid the over lap
                // which will directly overcome TLE
                curr = max(curr,node+maxJump+1);
            }
        }
        return false;
    }
};
