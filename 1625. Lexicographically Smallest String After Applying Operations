class Solution {
public:
    
    string ans;
    unordered_map<string,bool> visited;
    string add(string s, int &a){
        for(int i=1;i<s.size();i+=2){
            int x = s[i]-'0';
            x = (x+a)%10;
            s[i]  = (char)(x+'0');
        }
        return s;
    }
    string rotate(string s, int &b){
        reverse(s.begin(),s.end());
        reverse(s.begin(),s.begin()+b);
        reverse(s.begin()+b,s.end());
        return s;
    }
    void dfs(string s, int &a, int &b){
        if(visited[s]) return;
        visited[s] =1;
        ans=min(ans,s);
        dfs(rotate(s,b),a,b);
        dfs(add(s,a),a,b);
    }
    string findLexSmallestString(string s, int a, int b) {
        ans = s;
        dfs(s,a,b);
        return ans;
    }
};
