bool solve(vector<int>& nums) {
    if(nums.size()==1){
        return true;
    }
    if(nums[0]>=nums[1]){
        return false;
    }
    for(int i=1;i<nums.size();i++){
        if(nums[i]>nums[i-1] || nums[i]<nums[i-1]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}
