class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        priority_queue<int,vector<int>,greater<int>>pq;
        int c = 0;
        for(int i=0;i<dist.size();i++){
            pq.push((ceil((double)dist[i]/(double)speed[i])));
        }
        int time = 0;
        while(!pq.empty()){
            if(pq.top()<=time){
                break;
            }
            time++;
            c++;
            pq.pop();
        }
        return c;
    }
};
