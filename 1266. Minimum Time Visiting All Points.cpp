class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res = 0;
        int prev_x = points[0][0];
        int prev_y = points[0][1];
        for(int i=1;i<points.size();i++)
        {
            // int min_value = min(abs(points[i][0]-prev_x),abs(points[i][1]-prev_y));
            int max_value = max(abs(points[i][0]-prev_x),abs(points[i][1]-prev_y));
            res=res+max_value;
            prev_x = points[i][0];
            prev_y = points[i][1];
        }
        return res;
    }
};
