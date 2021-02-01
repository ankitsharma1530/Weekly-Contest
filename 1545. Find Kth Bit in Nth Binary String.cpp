class Solution {
public:
    char findKthBit(int n, int k) {
        string res = "0";
        if(n==1)
        {
            return '0';
        }
        else
        {
            while(--n)
            {
                string new_str = res+"1";
                string new_str2 = "";
                for(int i=0;i<res.length();i++)
                {
                    if(res[i]=='1')
                    {
                        new_str2.push_back('0');
                    }
                    else
                    {
                        new_str2.push_back('1');
                    }
                }
                reverse(new_str2.begin(),new_str2.end());
                new_str = new_str+new_str2;
                res = new_str;
            }
        }
        char ans=res[k-1];
        return ans;
        
        
    }
};
