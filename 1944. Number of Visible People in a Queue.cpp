class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<int>s;
        int n = heights.size();
        vector<int>res(n);
        res[n-1] = 0;
        s.push(n-1);
        for(int i=n-2;i>=0;i--){
            int c = 0;
            while(!s.empty() and heights[s.top()]<=heights[i]){
                // removing the smaller heights which are covered under the other
                s.pop();
                c++;
            }
            res[i] = c+(s.size()>0);
            s.push(i);
        }
        return res;
    }
};
