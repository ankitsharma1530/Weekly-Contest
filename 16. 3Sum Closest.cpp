class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest = nums[0]+nums[1]+nums[2];
        int n = nums.size();
        for(int i=0;i<n-2;i++){
            
            // removing duplicates cases
            if(i>0 and nums[i]==nums[i-1]){
                continue;
            }
            
            // two pointer approach
            int l = i+1;
            int h = n-1;
            while(l<h){
                int curr = nums[i]+nums[l]+nums[h];
                if(curr==target){
                    return target;
                }
                if(abs(target-curr)<abs(target-closest)){
                    closest = curr;
                }
                if(curr>target){
                    h--;
                }
                else{
                    l++;
                }
            }
        }
        return closest;
    }
};
