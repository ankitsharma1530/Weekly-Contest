class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans = 0, prev = 0, curr = 0; 
        for (int i = 0; i < s.size(); ++i) {
            if (i && s[i-1] != s[i]) {
                prev = curr; 
                curr = 0; 
            }
            if (prev >= ++curr) ans += 1; 
        }
        return ans; 
    }
};
