class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        
        int n = distance.size();
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum+=distance[i];
        }
        int x = 0;
        if(start<destination)
        {
            for(int i=start;i<destination;i++)
            {
                x+=distance[i];
            }
        }
        else
        {
            for(int i=start;i<n;i++)
            {
                x+=distance[i];
            }
            for(int i=0;i<destination;i++)
            {
                x+=distance[i];
            }
        }
        int dis = min(x,sum-x);
        return dis;
        
        
    }
};
