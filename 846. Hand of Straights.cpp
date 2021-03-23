class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
        if(hand.size()%W!=0)
        {
            return false;
        }
        map<int,int>ump;
        for(int i=0;i<hand.size();i++)
        {
            ump[hand[i]]++;
        }
        while(ump.size()>0)
        {
            int small = ump.begin()->first;
            for(int i=small;i<small+W;i++)
            {
                if(ump.find(i)==ump.end())
                {
                    return false;
                }
                int count = ump[i]-1;
                if(count==0)
                {
                    ump.erase(i);
                }
                else
                {
                    ump[i] =count;
                }
            }
        }
        return true;
    }
};
