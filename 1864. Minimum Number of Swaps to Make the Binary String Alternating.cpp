class Solution {
public:
    int minSwaps(string s) {
        int n = s.length();
        string s1 = "",s2 = "";
        int zeros = 0,ones = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') zeros++;
            else if(s[i]=='1') ones++;
            if(i%2==0){
                s1+="1";
                s2+="0";
            }else{
                s1+="0";
                s2+="1";
            }
        }
        if(abs(ones-zeros)>1) return -1;
        int op1 = 0,op2 = 0;
        for(int i=0;i<n;i++){
            if(s[i]!=s1[i]) op1++;
            if(s[i]!=s2[i]) op2++;
        }
        if(op1%2!=0 && op2%2!=0) return -1;
        else if(op1%2==0 && op2%2!=0) return op1/2;
        else if(op1%2!=0 && op2%2==0) return op2/2;
        else if(op1%2==0 && op2%2==0) return min((op1/2),(op2/2));
        return -1;
    }
};
