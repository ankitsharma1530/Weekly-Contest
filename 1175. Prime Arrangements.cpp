class Solution {
public:
    bool isPrime(int n){
        if(n==1){
            return false;
        }
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int Factorial(int n){
        long int f=1;
        while(n>0){
            f=(f*n)%1000000007;
            n--;
        }
        return f;
    }
    int numPrimeArrangements(int n) {
        int p=0;
        for(int i=2;i<=n;i++){
            if(isPrime(i)){
                p++;
            }
        }
        long int a = Factorial(p);
        long int b = Factorial(n-p);
        return (a*b)%1000000007;
    }
};
