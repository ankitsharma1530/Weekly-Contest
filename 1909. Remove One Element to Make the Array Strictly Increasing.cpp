class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int c = 0;
        for(int i=0;i<nums.size()-1;i++){
            int curr = nums[i];
            int next = nums[i+1];
            if(curr>=next){
                c++;
                if((i!=0 and nums[i-1]>next) and (i+1!=nums.size()-1 and curr>nums[i+2])){
                    c++;
                }
            }
            if(c>1){
                return false;
            }
        }
        return true;
    }
};
