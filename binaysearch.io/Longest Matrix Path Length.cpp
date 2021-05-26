int solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size(), ans = 0;

    vector<vector<int>> dp(n, vector<int>(m));
    vector<vector<int>> dl(n, vector<int>(m));
    vector<vector<int>> dr(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            dl[i][j] = (matrix[i][j] == 0);
            if (j > 0 && dl[i][j]) dl[i][j] += dl[i][j - 1];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = m - 1; j >= 0; --j) {
            dr[i][j] = (matrix[i][j] == 0);
            if (j < m - 1 && dr[i][j]) dr[i][j] += dr[i][j + 1];
            if (i == n - 1) dp[i][j] = max(dl[i][j], dr[i][j]);
        }
    }

    for (int i = n - 2; i >= 0; --i) {
        int mx = 0;
        for (int j = 0; j < m; ++j) {
            mx = (matrix[i][j] ? 0 : 1 + max(mx, dp[i + 1][j]));
            if (mx == 1) mx = 0;
            dp[i][j] = mx;
        }

        mx = 0;
        for (int j = m - 1; j >= 0; --j) {
            mx = (matrix[i][j] ? 0 : 1 + max(mx, dp[i + 1][j]));
            if (mx == 1) mx = 0;
            dp[i][j] = max(dp[i][j], mx);
        }
    }

    for (int j = 0; j < m; ++j)
        if (!matrix[0][j]) ans = max(ans, dp[0][j]);

    return ans;
}
