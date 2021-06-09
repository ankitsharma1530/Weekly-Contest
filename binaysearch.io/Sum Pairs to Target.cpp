int solve(vector<int>& nums, int target) {
    if (nums.size() < 2) {
        return 0;
    }
    unordered_map<int, int> st;
    for (auto x : nums) {
        st[x]++;
    }
    int count = 0;
    for(auto x : nums) {
        if(target==2*x){
            if(st[x]>1){
                count++;
                st[x]-=2;
            }
        } 
        else{
            if(st[target-x]>0 && st[x]>0){
                count++;
                st[target-x]--;
                st[x]--;
            }
        }
    }
    return count;
}
