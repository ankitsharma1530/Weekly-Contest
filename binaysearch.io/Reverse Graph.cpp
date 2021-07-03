void reverse(vector<vector<int>>&graph, vector<vector<int>>&adj,int n){
    for(int i=0;i<n;i++){
        for(auto x:graph[i]){
            adj[x].push_back(i);
        }
    }
}
vector<vector<int>> solve(vector<vector<int>>& graph) {
    // kosarajus algorithm
    int n = graph.size();
    vector<vector<int>>adj(n);
    reverse(graph,adj,n);
    return adj;
}
