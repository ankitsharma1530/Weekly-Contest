class Solution {
public:
    int countPalindromicSubsequence(string s) {
        // store the first and the last index of every character present in S
        vector<pair<int,int>>vis(26,{-1,-1});
        int n = s.length();
        for(int i=0;i<n;i++){
            if(vis[s[i]-'a'].first==-1){
                vis[s[i]-'a'].first= i;
            }
            else{
                vis[s[i]-'a'].second= i;
            }
        }
        int count = 0;
        for(int i=0;i<26;i++){
            
            if(vis[i].second!=-1)
            {
                unordered_set<char>st;
            // this means that minimum two apperance of current character is present
                for(int ind = vis[i].first+1;ind<vis[i].second;ind++){
                    if(st.find(s[ind])==st.end()){
                        st.insert(s[ind]);
                    }
                }
                count+=(int)st.size();
            }
        }
        return count;
    }
};
