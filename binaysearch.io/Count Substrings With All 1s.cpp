int solve(string s) {
    vector<int>res;
    // string temp = "";
    int c = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            c++;
        }
        else{
            if(c!=0){
                res.push_back(c);
                c=0;
            }
        }
    }
    if(c!=0){
        res.push_back(c);
    }
    int ans = 0;
    for(int i=0;i<res.size();i++){
        ans+=(res[i]*(res[i]+1))/2;
    }
    return ans;
}
