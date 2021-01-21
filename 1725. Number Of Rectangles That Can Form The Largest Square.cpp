class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int>res;
        for(int i=0;i<rectangles.size();i++)
        {
            int num1 = rectangles[i][0];
            int num2 = rectangles[i][1];
            res.push_back(min(num1,num2));
        }
        int num = *max_element(res.begin(),res.end());
        int ans = 0;
        for(int i=0;i<res.size();i++)
        {
            if(res[i]==num)
            {
                ans++;
            }
        }
        return ans;
    }
};
