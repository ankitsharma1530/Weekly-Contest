class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        int i=0;
        int j=nums.size()-1;
        int f = 1;
        while(i<=j){
            if(!f){
                res.push_back(nums[i++]);
                f=1;
            }
            else{
                res.push_back(nums[j--]);
                f=0;
            }
        }
        return res;
    }
};
