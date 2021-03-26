class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if((cheeseSlices)>tomatoSlices/2 || 2*cheeseSlices<tomatoSlices/2)
        {
            return {};
        }
        if(cheeseSlices==0 && tomatoSlices==0)
        {
            return {0,0};
        }
        if(tomatoSlices%2!=0)
        {
            return {};
        }
        int y = (4*cheeseSlices-tomatoSlices)/2;
        int x = cheeseSlices-y;
        return {x,y};
    }
};
