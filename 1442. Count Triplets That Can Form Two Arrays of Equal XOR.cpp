class Solution {
public:
    int countTriplets(vector<int>& arr) {
        // method - O(N^3)
        int tc = arr.size(), ans = 0;
        vector<int> prefix(tc, 0);
        prefix[0] = arr[0];
        for(int i = 1; i < tc; ++i) {   // calc prefix
            prefix[i] = prefix[i-1] ^ arr[i];
        }
        
        int a, b;
        // O(N^2)
        for(int i = 0; i < tc-1; ++i) {
            for(int k = i+1; k < tc; ++k) {
                if((i == 0 && prefix[k] == 0) || 
                   (i != 0 && (prefix[i-1] == prefix[k]))) {
                    ans += k-i;
                }   
            }
        }
        // O(N^3)
        // for(int i = 0; i < tc-1; ++i) {
        //     for(int j = i + 1; j < tc; ++j) {
        //         a = (i == 0) ? prefix[j-1] : prefix[j-1]^prefix[i-1];
        //         for(int k = j; k < tc; ++k) {
        //             b = prefix[k]^prefix[j-1];
        //             if(a == b) ++ans;
        //         }
        //     }
        // }
        return ans;
    }
