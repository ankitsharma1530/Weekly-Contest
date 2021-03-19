class Solution {
public:
    void solve(vector<bool>& vis, vector<vector<int>>&rooms , int key)
    {
        if(vis[key]==true)
        {
            return;
        }
        vis[key] = true;
        for(auto x:rooms[key])
        {
            solve(vis,rooms,x);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool>vis(n,false);
        // vis[0]=true;
        solve(vis,rooms,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
            {
                return false;
            }
        }
        return true;
    }
    
};
