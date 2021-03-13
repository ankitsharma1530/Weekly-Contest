class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int res = 0;
        int arr[60] = {0};
        for(int i=0;i<time.size();i++)
        {
            // in every questions of map we used to increment first then we used to do some operations
            // but here the sceneraio is totally changed
            
            int rem = time[i]%60;
            if(rem==0)
            {
                res = res+arr[0];
            }
            else
            {
                res = res+arr[60-rem];
            }
            arr[rem]++;
            
            
            
        }
        return res;
    }
};
