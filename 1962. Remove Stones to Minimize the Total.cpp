class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto x:piles){
            pq.push(x);
        }
        int sum = 0;
        while(k-- and !pq.empty()){
            int t = pq.top();
            pq.pop();
            t = (t+1)/2;
            if(t>0){
                pq.push(t);
            }
        }
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};
