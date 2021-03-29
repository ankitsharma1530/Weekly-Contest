class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int a=-1,dis=INT_MAX;
        for(int i=0; i<points.size(); i++){
            if(points[i][0]==x || points[i][1]==y){
               if(dis>abs(points[i][0]-x) + abs(points[i][1]-y)){
                   dis=abs(points[i][0]-x) + abs(points[i][1]-y);
                   a=i;
               }  
            }
        }
        return a;
    }
};
