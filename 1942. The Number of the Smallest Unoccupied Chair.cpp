class Solution {
public:
    int smallestChair(vector<vector<int>>& arr, int target) {
        int t_arrival = arr[target][0];
        sort(arr.begin(),arr.end());
       
        // we will use two priority queue
        // one will store the minimum table that is empty
        // and other will store the table that will be going to free first
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>reserve_seats;
        priority_queue<int,vector<int>,greater<int>>avilable_seats;
        for(auto x:arr){
            
            // base codn
            while(!reserve_seats.empty() and reserve_seats.top().first<=x[0]){
                avilable_seats.push(reserve_seats.top().second);
                reserve_seats.pop();
            }
            if(x[0]==t_arrival){
                break;
            }
            else if(avilable_seats.empty()){
                reserve_seats.push({x[1],reserve_seats.size()});
            }
            else{
                reserve_seats.push({x[1],avilable_seats.top()});
                avilable_seats.pop();
            }
        }
        return avilable_seats.empty()?reserve_seats.size():avilable_seats.top();
    }
};1942. The Number of the Smallest Unoccupied Chair
