class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        // string temp = "";
        int i = 0;
        for(auto x:words){
            if(i>=s.length()){
                return true;
            }
            bool f = false;
            for(int j = 0;j<x.length();j++){
                if(x[j]!=s[i]){
                    return false;
                }
                i++;
                if(j==x.length()-1){
                    f=true;
                }
                if(i>=s.length() and f){
                    return true;
                }
                else if(i>=s.length() and !f){
                    return false;
                }
            }
        }
        if(i<s.length()){
            return false;
        }
        return true;
    }
};
