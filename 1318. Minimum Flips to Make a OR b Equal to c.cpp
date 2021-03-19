class Solution {
public:
    int minFlips(int a, int b, int c) {
        int n = 0;
        while(a>0 || b>0 || c>0)
        {
            if((c&1))
            {
                if((a&1)==0 && (b&1)==0)
                {
                    n++;
                }
            }
            else
            {
                if((a&1)==1 && (b&1)==1)
                {
                    n=n+2;
                }
                else if((a&1)!=(b&1))
                {
                    n++;
                }
            }
            
            a=a>>1;
            b=b>>1;
            c=c>>1;
        }
        return n;
    }
};
