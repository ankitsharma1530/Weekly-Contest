class Solution {
public:
    bool checkZeroOnes(string s) {
        int o = 0;
        int z = 0;
        int i = 0;
        while(i<s.length())
        {
            if(s[i]=='1')
            {
                int x = 1;
                while(s[i]=='1')
                {
                    i++;
                    x++;
                }
                o = max(o,x);
            }
            else
            {
                int x = 1;
                while(s[i]=='0')
                {
                    i++;
                    x++;
                }
                z = max(z,x);
            }
        }
        // cout<<o<<" "<<z<<endl;
        if(o>z)
        {
            return true;
        }
        return false;
    }
};
