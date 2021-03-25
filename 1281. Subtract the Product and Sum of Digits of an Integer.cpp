class Solution {
public:
    int subtractProductAndSum(int n) {
        int s = 0;
        int p = 1;
        while(n>0)
        {
            int rem = n%10;
            s=s+rem;
            p=p*rem;
            n=n/10;
        }
        return p-s;
    }
};
