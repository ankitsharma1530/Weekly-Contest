class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        int i=0;
        int n = h.size();
        priority_queue<int>q;
        for(i=0;i<n-1;i++)
        {
            // res = i;
            if(h[i+1]<=h[i])
            {
                continue;
            }
            int d = h[i+1]-h[i];
            // first i will check for bricks
            if(d<=b)
            {
                b-=d;
                q.push(d);
            }
            else if(l>0) // if bricks are not there but we have sufficent ladders
            {
                // we have to check greedly wether this is good place for putting the ladder ornot
                // basically we have to put the ladder at those place where the difference btwn
                // the consecutive building is large
                // so for storing the consecutive range we will use maxheap
                if(!q.empty())
                {
                if(q.top()>d)
                {
                    b+=q.top();
                    // pop that large consecutive differnce 
                    // coz we will use ladder there
                    q.pop();
                    q.push(d);
                    b-=d;

                }
                }
                l--;
            }
            else
            {
                break;
            }
        }
        return i;
    }
};
