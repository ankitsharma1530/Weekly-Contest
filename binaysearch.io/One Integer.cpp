struct cmp{
    bool operator()(int a, int b){
        return a>b;
    }
};
int solve(vector<int>& nums) {
    priority_queue<int,vector<int>,cmp>pq;
    for(int i=0;i<nums.size();i++){
        pq.push(nums[i]);
    }
    int res = 0;
    while(pq.size()>1){
        int t1= pq.top();
        pq.pop();
        int t2 = pq.top();
        pq.pop();
        res+=t1+t2;
        pq.push(t1+t2);
    }
    return res;
}
