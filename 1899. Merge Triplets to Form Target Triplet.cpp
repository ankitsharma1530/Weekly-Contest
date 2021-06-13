class Solution {
public:
    // greedy
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        
        vector<vector<int>>v;
        for(int i=0;i<triplets.size();i++){
            if(triplets[i][0]<=target[0] and triplets[i][1]<=target[1] and triplets[i][2]<=target[2]){
                v.push_back(triplets[i]);
            }
        }
        
        int a=0;
        int b=0;
        int c=0;
        for(int i=0;i<v.size();i++){
            a=max(a,v[i][0]);
            b=max(b,v[i][1]);
            c=max(c,v[i][2]);
            
        }
        if(a==target[0] and b==target[1] and c==target[2]){
            return true;
        }
        return false;
    }
    
};
