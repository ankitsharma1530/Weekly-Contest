class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>ump;
        for(auto& x:words){
            for(int i=0;i<x.length();i++){
                ump[x[i]]++;
            }
        }
        int n = words.size();
        for(auto x:ump){
            if(x.second%n!=0){
                return false;
            }
        }
        return true;
    }
};
