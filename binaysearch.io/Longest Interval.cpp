int solve(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    int start = intervals[0][0];
    int end = intervals[0][1];
    int res = end-start+1;
    for(int i=1;i<intervals.size();i++){
        if(intervals[i][0]<=end){
            // merge
            end = max(end,intervals[i][1]);
            res = max(res,end-start+1);
        }
        else{
            start = intervals[i][0];
            end = intervals[i][1];
            res = max(res,end-start+1);
        }
    }
    return res;
}
