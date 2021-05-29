class Solution {
public:
    

    int dp[17][1<<17];
    int N;
    vector<int> a, b;

    int rec(int ind, int b1){
        if(ind == N){
            return 0;
        }
        if(dp[ind][b1] != -1)
            return dp[ind][b1];

        int ret = INT_MAX;

        for(int i = 0; i < N; i++){
            if(((b1>>i)&1) == 0){
                int x = (a[ind]^b[i]) + rec(ind + 1, b1|(1<<i));
                ret = min(ret, x);
            }
        }
        return dp[ind][b1] = ret;
    }

    int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size();i++){
            a.push_back(nums1[i]);
            b.push_back(nums2[i]);
        }
        N = nums1.size();
        memset(dp,-1,sizeof(dp));
        return rec(0,0);
    }
};
