class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++)
        {
            int num1 = n-i;
            int num2 = i;
            bool check = false;
            while(num1>0)
            {
                int rem = num1%10;
                if(rem==0)
                {
                    check=true;
                }
                num1=num1/10;
            }
            while(num2>0)
            {
                int rem = num2%10;
                if(rem==0)
                {
                    check=true;
                }
                num2=num2/10;
            }
            if(check)
            {
                continue;
            }
            else
            {
                return {n-i,i};
            }
        }
        return {};
    }
};
