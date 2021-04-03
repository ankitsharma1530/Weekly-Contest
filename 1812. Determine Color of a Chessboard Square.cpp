class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int x = coordinates[0]-'a';
        int y = coordinates[1]-'0';
        if(x%2==0)
        {
            if(y%2!=0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        else
        {
            if(y%2!=0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
