vector<int> solve(string s) {
    unordered_map<int,int>ump;
    int d = 0;
    int md = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            d++;
        }
        else if(s[i]==')'){
            d--;
        }
        else{
            // this will keep track the number of people in the particular depth
            ump[d]+=1;
        }
        // now we will keep track for our max_depth
        md = max(md,d);
    }
    vector<int>res(md);
    for(auto x:ump){
        res[x.first-1] = x.second;
    }
    return res;
}
