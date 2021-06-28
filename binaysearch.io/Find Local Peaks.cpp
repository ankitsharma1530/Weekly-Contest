vector<int> solve(vector<int>& nums) {
    vector<int>res;
    if(nums.size()<2){
        return res;
    }
    if(nums[0]>nums[1]){
        res.push_back(0);
    }
    for(int i=1;i<nums.size()-1;i++){
        if(nums[i]>nums[i-1] and nums[i]>nums[i+1]){
            res.push_back(i);
        }
    }
    int n = nums.size();
    if(nums[n-1]>nums[n-2]){
        res.push_back(n-1);
    }
    return res;
}
