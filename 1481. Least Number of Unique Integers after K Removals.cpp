class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        // solve it by min heap
        unordered_map<int,int>ump;
        for(int i=0;i<arr.size();i++)
        {
            ump[arr[i]]++;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:ump)
        {
            pq.push(it.second);
        }
        while(k--)
        {
            int temp = pq.top();
            temp--;
            pq.pop();
            if(temp>0)
            {
                pq.push(temp);
            }
        }
        return pq.size();
    }
};
