int solve(vector<int>& nums) {
    unordered_map<int,int>ump;
    for(int i=0;i<nums.size();i++){
        ump[nums[i]]++;
    }
    int res = nums.size();
    for(auto& x:ump){
        if(x.second>1){
            res+=((x.second-1)*x.second)/2;
        }
    }
    return res;
}
