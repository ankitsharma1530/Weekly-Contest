class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    unordered_set<int>s;
    SeatManager(int n) {
        for(int i=1;i<=n;i++)
        {
            pq.push(i);
            s.insert(i);
        }
    }
    
    int reserve() {
        int res = pq.top();
        pq.pop();
        s.erase(res);
        return res;
    }
    
    void unreserve(int seatNumber) {
        if(s.find(seatNumber)==s.end())
        {
            pq.push(seatNumber);
            s.insert(seatNumber);
        }
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
