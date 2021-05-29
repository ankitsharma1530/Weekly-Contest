class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length()<3){
            return 0;
        }
        int c = 0;
        // cout<<s.length()-2<<endl;
        for(int i=0;i<s.length()-2;i++){
            if(s[i+1]!=s[i] && s[i+1]!=s[i+2] && s[i]!=s[i+2]){
                c++;
            }
        }
        return c;
    }
};
