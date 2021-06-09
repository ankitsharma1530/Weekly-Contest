int solve(string s) {
    unordered_map<char, int> freq;
    for (auto& c : s) freq[c]++;
    vector<int> freqCounts;
    for (auto& p : freq) freqCounts.push_back(p.second);
    sort(freqCounts.rbegin(), freqCounts.rend());
    int ret = 0;
    int lastFreq = 1e9;
    for (int freq : freqCounts) {
        // freq must be at most lastFreq
        if (freq > lastFreq) {
            int rem = freq - lastFreq;
            ret += rem;
            freq -= rem;
        }
        lastFreq = max(0, freq - 1);
    }
    return ret;
}
