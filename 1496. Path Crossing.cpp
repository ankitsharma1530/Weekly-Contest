class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>v;
        v.insert(make_pair(0,0));
        int x = 0;
        int y = 0;
        for(int i=0;i<path.length();i++)
        {
            if(path[i]=='N')
            {
                x=x+1;
            }
            else if(path[i] == 'S')
            {
                x = x-1;
            }
            else if(path[i]=='E')
            {
                y = y+1;
            }
            else
            {
                y = y-1; 
            }
            if(v.find({x,y})!=v.end())
            {
                return true;
            }
            v.insert(make_pair(x,y));
        }
        return false;
    }
};
