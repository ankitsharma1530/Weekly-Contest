bool bfs(int src,vector<vector<int>>& graph,vector<int> &color){
        color[src]=1;
        queue<int> q;
        q.push(src);
        
        while(!q.empty()){
            int u=q.front();
            q.pop();
            
            
            for(auto i:graph[u]){
                if( color[i]==-1){
					//Assign alternate color to its neighbors.
                    color[i]=1-color[u];
                    // now adjacent ith node got the color
                    // then we will check for its adjacent 
                    // hence we pushed it into the queue
                    q.push(i);
                }
                else if(color[i]==color[u])return false; // If neighbor is of same color returnn false.
            }
        }
        return true;
}
bool solve(vector<vector<int>>& graph) {
    int v=graph.size();
		// Create a color array to store colors assigned to all 
		// veritces. Vertex/ number is used as index in this 
		// array. The value '-1' of colorArr[i] is used to 
		// indicate that no color is assigned to vertex 'i'. 
		// The value 1 is used to indicate first color is 
		// assigned and value 0 indicates second color is 
		// assigned. 
        vector<int> color(v,-1);//for(int i=0;i<v;i++)color[i]=-1;
		//Handles if graph is disconnected.
        for(int i=0;i<v;i++){
            if(color[i]==-1){
                if(!bfs(i,graph,color))return false;
            }
        }
        return true;
}
