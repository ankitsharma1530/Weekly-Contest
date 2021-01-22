class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<unordered_set<int>>graph(n);
        for(auto road:roads)
        {
            graph[road[0]].insert(road[1]);
            graph[road[1]].insert(road[0]);
        }
        int res = 0;
        //check for each pair
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int curr_res = graph[i].size()+graph[j].size();
                if(graph[i].find(j)!=graph[i].end())
                {
                    curr_res --;
                }
                res = max(curr_res,res);
            }
        }
        return res;
    }
};
