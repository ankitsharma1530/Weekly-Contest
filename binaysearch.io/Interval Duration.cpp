int solve(vector<vector<int>>& intervals) {
    if(intervals.size()==0){
        return 0;
    }
    sort(intervals.begin(),intervals.end());
    int start = intervals[0][0];
    int end = intervals[0][1];
    int time = 0;
    for(int i=1;i<intervals.size();i++){
        if(intervals[i][0]<=end){
            end = max(end,intervals[i][1]);
        }
        else{
            time+=end-start+1;
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }
    time+=end-start+1;
    return time;
}
