class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int x_y = 0;
        int y_x = 0;
        int n = s1.length();
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
               if(s1[i]=='x')
               {
                   x_y++;
               }
                else
                {
                    y_x++;
                }
            }
        }
        if((y_x+x_y)%2==1)
        {
            return -1;
        }
        if(y_x%2==1 && x_y%2==1)
        {
            return (y_x)/2+(x_y)/2+2;
        }
        return (y_x+x_y)/2;
    }
};
