// class Solution {
// public:
//     vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
//         vector<int>res;
//         for(auto q:queries)
//         {
//             int a = q[0];
//             int b = q[1];
//             int r = q[2];
//             int count = 0;
//            for(auto p:points){
//               if((abs(a-p[0])*abs(a-p[0]) +abs(b-p[1])*abs(b-p[1]) ) <= (r*r) )
//               count++;
//            }
//             res.push_back(count);
//         }
//         return res;
        
//     }
// };
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> res;
        for (auto& q : queries) {
            int cnt = 0;
            for (auto& p : points) {
                if ((p[0]-q[0]) * (p[0]-q[0]) + (p[1]-q[1]) * (p[1]-q[1]) <= q[2] * q[2]) ++ cnt;
            }
            res.push_back(cnt);
        }
        return res;
    }
};
