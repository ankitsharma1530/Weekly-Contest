class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if(n<=1){
            return n;
        }
        int nums[n+1];
        // we just check for every element from left to right 
        // then right to left
    
        nums[0] = 1;
        for(int i=1;i<n;i++){
            // if curr is greater than the previous one then we add 1 more candy which our               previous person hold
            if(ratings[i]>ratings[i-1]){
                nums[i] = nums[i-1]+1;
            }
            else{
                nums[i] = 1;
            }
        }
        
        // Now, we need to update the i'th element's candies in order to satisfy both the left neighbor and the right neighbor relation. 
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                nums[i] = max(nums[i+1]+1,nums[i]);
            }
        }
        int res = 0;
        for(int i=0;i<n;i++){
            res+=nums[i];
        }
        return res;
    }
};
