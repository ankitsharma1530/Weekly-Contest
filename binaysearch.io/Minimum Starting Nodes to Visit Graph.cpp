vector<int> solve(vector<vector<int>>& edges) {
    int n = 0;
    set<int>s;
    for(auto x:edges){
        if(s.find(x[0])==s.end()){
            s.insert(x[0]);
            n++;
        }
        if(s.find(x[1])==s.end()){
            s.insert(x[1]);
            n++;
        }
    }
    int arr[n];
    memset(arr,0,sizeof(arr));
    for(auto x:edges){
        arr[x[1]]++;
    }
    vector<int>res;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            res.push_back(i);
        }
    }
    return res;
    
    

}
