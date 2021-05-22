int solve(vector<vector<string>>& matrix, vector<string>& blocks) {
    unordered_map<string,pair<int,int>>ump;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            ump[matrix[i][j]] = {i,j};
        }
    }
    int d = 0;
    int px = 0;
    int py= 0;
    for(int i=0;i<blocks.size();i++)
    {
        pair<int,int>temp = ump[blocks[i]];
        d+= abs(temp.first-px)+abs(temp.second-py);
        px = temp.first;
        py = temp.second;
    }
    return d;
}
