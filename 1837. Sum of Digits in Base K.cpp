class Solution {
public:
    int sumBase(int n, int k) {
        int num = 0;
        while(n>0)
        {
            num = num*10+(n%k);
            n=n/k;
        }
        // cout<<num<<" ";
        int sum = 0;
        while(num>0)
        {
            sum=sum+(num%10);
            num=num/10;
        }
        return sum;
    }
};
