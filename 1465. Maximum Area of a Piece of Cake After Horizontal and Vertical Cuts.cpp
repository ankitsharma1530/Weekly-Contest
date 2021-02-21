int MOD = 1e9+7;
class Solution {
public:
    int maxArea(int h, int w, vector<int>& hori, vector<int>& verti) {
        int i, j, x, y;
        long ans;
        sort(hori.begin(), hori.end());
        sort(verti.begin(), verti.end());
        x = hori[0];
        y = verti[0];
        for(i = 1 ; i < hori.size() ; i++)
            x = max(x, hori[i]-hori[i-1]);
        x = max(x, h - hori.back());
        for(i = 1 ; i < verti.size() ; i++)
            y = max(y, verti[i]-verti[i-1]);
        y = max(y, w - verti.back());
        ans = (long)x * (long)y;
        ans %= MOD;
        if(ans < 0)
            ans += MOD;
        return ans;
    }
};
