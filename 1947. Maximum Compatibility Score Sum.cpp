class Solution {
public:
    // backtracking
    // time complexity -> O(N! * MN)
    int dfs(vector<vector<int>>& students, vector<vector<int>>& mentors,int ind,vector<bool> vis,int n,int m){
        if(ind>=n){
            return 0;
        }
        int ans =0;
        for(int i=0;i<n;i++){ // cheking student with every non consumed teacher
            if(vis[i]==false){
                vis[i] = true;
                int c = 0;
                for(int j=0;j<m;j++){
                    if(students[ind][j]==mentors[i][j]){
                        c+=1;
                    }
                }
                ans = max(ans,dfs(students,mentors,ind+1,vis,n,m)+c);
                vis[i]=false; // backtrack
            }
        }
        return ans;
    }
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        int n = students.size(); // students
        int m = students[0].size();
        vector<bool>vis(n,false); // visited array for consumed mentors
        return dfs(students,mentors,0,vis,n,m);
    }
};
