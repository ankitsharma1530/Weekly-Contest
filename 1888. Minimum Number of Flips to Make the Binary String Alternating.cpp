class Solution {
public:
    // TC -> O(2*n)
    int minFlips(string s) {
        int k = s.length();
        // created the twice of sting S
        s+=s;
        
        // string -> 01010101
        string zero_one = "";
        // string -> 1010101
        string one_zero = "";
        for(int i=0;i<2*k;i++){
            if(i&1){
                zero_one.push_back('1');
                one_zero.push_back('0');
            }
            else{
                zero_one.push_back('0');
                one_zero.push_back('1');
            }
        }
        int ans = INT_MAX;
        
        // this zo & oz are count of how many swaps we had to do for making the 
        // zero_one and one_zero string equal to S respectively
        int zo = 0;
        int oz = 0;
        
        for(int i=0;i<k;i++){
            if(zero_one[i]!=s[i]){
                zo++;
            }
            if(one_zero[i]!=s[i]){
                oz++;
            }
        }
        
        ans = min({ans,zo,oz});
        for(int i=k;i<2*k;i++){
            if(zero_one[i-k]!=s[i-k]){
                zo--;
            }
            if(one_zero[i-k]!=s[i-k]){
                oz--;
            }
            
            if(zero_one[i]!=s[i]){
                zo++;
            }
            if(one_zero[i]!=s[i]){
                oz++;
            }
            
            ans = min({ans,oz,zo});
        }
        return ans;
    }
};
