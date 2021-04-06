class Solution {
public:
    // as they say some condn are there to add the vowels in the string
    // we represnt vowels as integer like for a -> 0
    // e->1
    // i->2
    // o->3
    // u->4
    // so check will store the codn , that which can be added in back of which vowel
    vector<vector<int>>check = {{1},{0,2},{0,1,3,4},{2,4},{0}};
    int dp[20001][5];
    int solve(int n,int vowel)
    {
        // base codn
        if(n==1)
        {
            return 1;
        }
        //memo base codn
        if(dp[n][vowel]!=-1)
        {
            return dp[n][vowel];
        }
        int sum = 0;
        for(int i=0;i<check[vowel].size();i++)
        {
            sum=(sum+solve(n-1,check[vowel][i]))%1000000007;
        }
        dp[n][vowel]=sum;
        return dp[n][vowel];
    }
    int countVowelPermutation(int n) {
        memset(dp,-1,sizeof(dp));
        //because I have to check for all vowels as the starting character
        // hence we will use the for loop
        int count = 0;
        for(int i=0;i<5;i++)
        {
            count=(count+solve(n,i))%1000000007;
        }
        return count;
    }
};
