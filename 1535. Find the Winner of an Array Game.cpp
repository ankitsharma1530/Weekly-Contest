class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        deque<int>q;
        for(int i=0;i<arr.size();i++)
        {
            q.push_back(arr[i]);
        }
        int ans;
        int count = 0;
        int temp = q.front();
        q.pop_front();
        while(true) 
            //as we want the infinte loop to be execute
        {
            if(temp>q.front())
            {
                count++;
                q.push_back(q.front());
                q.pop_front();
                if(count==arr.size()-1 || count>=k)
                {
                    ans = temp;
                    break;
                }
            }
            else
            {
                q.push_back(temp);
                temp = q.front();
                q.pop_front();
                count = 1;
                if(count==arr.size()-1 || count>=k)
                {
                    ans = temp;
                    break;
                }
            }
        }
        return ans;
    }
};
