class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int count = 0;
        int i = 1;
        int chance = piles.size()/3;
        int len = piles.size();
        while(i<len && chance>0)
        {
            count  = count + piles[i];
            i=i+2;
            chance--;
        }
        return count;
    }
};
