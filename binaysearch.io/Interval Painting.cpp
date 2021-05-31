int solve(vector<int>& nums, int target) {
    if (nums.empty()) return 0;
    map<int, int> mp;
    int x = 0;
    for (int& i : nums) {
        int l = x + i;
        int r = x;
        if (l > r) swap(l, r);
        mp[l]++;
        mp[r]--;
        x += i;
    }
    int sum = 0, ans = 0;
    for (auto it = mp.begin(); it != prev(mp.end()); it++) {
        sum += it->second;
        if (sum >= target) ans += next(it)->first - it->first;
    }
    return ans;
}
