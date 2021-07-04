int find(int node,vector<int>& par){
    if(par[node]==node){
        return node;
    }
    return find(par[node],par);
}
int num(string s){
    return s[0]-'a';
}
bool solve(string s, vector<vector<string>>& pairs) {
    // a->b b->c and we can derive a->c
    // then use union find

    // parent array
    vector<int>par(26);
    for(int i=0;i<26;i++){
        par[i] = i;
    }
    for(auto x:pairs){
        int n1 = num(x[0]);
        int n2 = num(x[1]);
        int par1 = find(n1,par);
        int par2 = find(n2,par);
        if(par1!=par2){
            par[par2] = par1;
        }
    }
    int i=0;
    int j=s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            int n1 = s[i]-'a';
            int n2 = s[j]-'a';
            int par1 = find(n1,par);
            int par2 = find(n2,par);
            if(par1!=par2){
                return false;
            }
        }
        i++;
        j--;
    }
    return true;
}
