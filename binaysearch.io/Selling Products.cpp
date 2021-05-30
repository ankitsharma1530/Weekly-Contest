int solve(vector<int>& items, int n) {
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    unordered_map<int,int>ump;
    for(int i=0;i<items.size();i++){
        ump[items[i]]++;
    }
    for(auto& x:ump){
        pq.push({x.second,x.first});
    }
    while(n--){
        auto curr = pq.top();
        pq.pop();
        int num = curr.first-1;
        int c = curr.second;
        if(num>0){
            pq.push({num,c});
        }
    }
    return pq.size();
}
