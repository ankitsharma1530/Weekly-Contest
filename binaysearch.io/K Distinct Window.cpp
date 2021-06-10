vector<int> solve(vector<int>& nums, int k) {
    unordered_map<int,int>ump;
    for(int i=0;i<k;i++){
        ump[nums[i]]++;
    }
    vector<int>res;
    res.push_back(ump.size());
    for(int i=k;i<nums.size();i++){
        ump[nums[i-k]]--;
        if(ump[nums[i-k]]<=0){
            ump.erase(nums[i-k]);
        }
        ump[nums[i]]++;
        res.push_back(ump.size());
    }
    return res;
}
