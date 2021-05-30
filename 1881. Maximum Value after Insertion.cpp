class Solution {
public:
    string maxValue(string n, int x) {
        bool flag = true;
        if(n[0]=='-'){
            flag=false;
            n=n.substr(1,n.length());
        }
        string res = "";
        if(flag){
            int i=0;
            int l = n.length();
            bool nt = true;
            while(i<l){
                int num = n[i]-'0';
                if(nt && x>num){
                    res+=to_string(x);
                    nt=false;
                }
                else{
                    res+=n[i];
                    i++;
                }
            }
            if(nt==true){
                res+=to_string(x);
            }
        }
        else{
            int i=0;
            int l = n.length();
            bool nt = true;
            int ind = -1;
            res.push_back('-');
            while(i<l){
                int num = n[i]-'0';
                if(num>x){
                    ind=i;
                    nt = false;
                    break;
                    
                }
                i++;
            }
            if(nt){
                res+= n+to_string(x);
            }
            else{
                res+= n.substr(0,ind)+to_string(x)+n.substr(ind,n.length());
            }
        }
        return res;
    }
};
