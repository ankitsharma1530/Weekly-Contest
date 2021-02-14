class Solution {
public:
    int numSub(string s) {
        long res = 0, k = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') k ++;
            else {
                res += k * (k + 1) / 2;
                k = 0;
            }
        }
        if (k) res += k * (k + 1) / 2;

        return res % 1000000007;
    }
};
