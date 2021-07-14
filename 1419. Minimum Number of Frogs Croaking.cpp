class Solution {
public:
    int minNumberOfFrogs(string s) {
        int n = s.length();
        int c = 0;
        int r = 0;
        int o = 0;
        int a = 0;
        int k = 0;
        int max_frogs = 0;
        for(int i=0;i<s.length();i++){
            // we will only consider COARK characters
            if(s[i]=='c'){
                c++;
                max_frogs = max(max_frogs,c);
            }
            else if(s[i]=='r'){
                r++;
                if(r>c){
                    return -1;
                }
            }
            else if(s[i]=='o'){
                o++;
                if(o>r){
                    return -1;
                }
            }
            else if(s[i]=='a'){
                a++;
                if(a>o){
                    return -1;
                }
            }
            else if(s[i]=='k'){
                k++;
                if(k>a){
                    return -1;
                }
                // otherwise one frog singing is complete hence
                c--;
                r--;
                o--;
                a--;
                k--;
            }
            else{
                return -1;
            }
        }
        if(c!=0){
            return -1;
        }
        return max_frogs;
    }
};
