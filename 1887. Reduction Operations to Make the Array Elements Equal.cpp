class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(auto& x:nums){ // O(n)
            ump[x]++;
        }
        int m = *min_element(nums.begin(),nums.end()); // O(n)
        priority_queue<pair<int,int>>pq;
        for(auto& x:ump){
            pq.push(make_pair(x.first,x.second)); // O(nlogn)
            // cout<<x.first<<x.second<<endl;
        }
        int res = 0;
        while(pq.top().first!=m){ // O(nlogn)
            auto temp = pq.top();
            pq.pop();
            auto curr = pq.top();
            pq.pop();
            res+=temp.second;
            curr.second+=temp.second;
            pq.push(curr);
        }
        return res;
    }
};
