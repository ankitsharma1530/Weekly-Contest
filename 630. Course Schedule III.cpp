class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b)
    {
        // sort the array according to the requirments
        // requirments are-:
        // 1. who ever is having small execution time will come first
        if(a[1]<b[1])
        {
            return true;
        }
        return false;
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),cmp);
        // use of max_heap so that we can have the course which take the maximum execution time
        priority_queue<int>pq;
        // int count = 0;
        int timer = 0;
        for(auto& x:courses)
        {
            if(timer+x[0]<=x[1])
            {
                timer+=x[0];
                pq.push(x[0]);
            }
            else
            {
                if(!pq.empty() && pq.top()>x[0])
                {
                    timer-=pq.top();
                    pq.pop();
                    timer+=x[0];
                    pq.push(x[0]);
                }
            }
        }
        return pq.size();
    }
};
