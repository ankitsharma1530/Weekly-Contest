class Solution {
public:
    bool solve(int n,int p)
    {
        if(n==0)
        {
            return true;
        }
        for(int i=p;i>=0;i--)
        {
            if(pow(3,i)<=n)
            {
                if(solve(n-pow(3,i),i-1))
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool checkPowersOfThree(int n) {
        return solve(n,16);
    }
};
