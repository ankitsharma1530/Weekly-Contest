class Solution {
public:
    int addRungs(vector<int>& rungs, int k) {
        
        sort(rungs.begin(),rungs.end());
        int res = 0;
        if(rungs[0]-0>k){
            res+=ceil((double)rungs[0]/k)-1;
        }
        for(int i=0;i<rungs.size()-1;i++){
            if(rungs[i+1]-rungs[i]>k){
                res+=ceil((double)(rungs[i+1]-rungs[i])/k)-1;
            }
        }
        return res;
    }
};
