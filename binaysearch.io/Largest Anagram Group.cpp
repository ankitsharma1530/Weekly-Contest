int solve(vector<string>& words) {
    unordered_map<string,int>ump;
    for(auto& x:words){
        sort(x.begin(),x.end());
        ump[x]++;
    }
    int res = -1;
    for(auto& x:ump){
        res = max(res,x.second);
    }
    return res;
}
