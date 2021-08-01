class Solution {
public:
    bool isThree(int n) {
        int c = 2; // 1 and n are divisors
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                c++;
            }
            if(c>3){
                return false;
            }
        }
        return c==3;
    }
};
