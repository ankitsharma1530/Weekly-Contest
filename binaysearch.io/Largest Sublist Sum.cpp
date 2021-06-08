int solve(vector<int>& nums) {
    int res_max = nums[0];
    int curr_max = nums[0];
    for(int i=1;i<nums.size();i++){
        if(curr_max<0){
            curr_max=0;
        }
        curr_max+=nums[i];
        
        res_max= max(res_max,curr_max);
    }
    return res_max;
}
