class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int>pq;
        for(int i=0;i<target.size();i++)
        {
            pq.push(target[i]);
        }
        
        long long int sum = 0;
        for(int i=0;i<target.size();i++)
        {
            sum=sum+target[i];
        }
        while(true)
        {
            int temp = pq.top();
            pq.pop();
            sum = sum-temp;
            if(temp==1 || sum==1)
            {
                return true;
            }
            if(sum==0 || temp%sum==0 || temp<sum)
            {
                return false;
            }
            temp = temp%sum;
            sum=sum+temp;
            pq.push(temp);
        }
        
    }
};
