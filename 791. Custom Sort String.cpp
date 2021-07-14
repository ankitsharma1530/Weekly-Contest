class Solution {
public:
    string customSortString(string order, string str) {
        unordered_map<char,int>ump;
        for(auto x:str){
            ump[x]++;
        }
        string temp = "";
        for(auto x:order){
            if(ump.find(x)!=ump.end()){
                temp.push_back(x);
            }
        }
        string res = "";
        for(auto x:temp){
            for(int i=0;i<ump[x];i++){
                res+=x;
            }
            ump[x] = 0;
        }
        for(auto x:ump){
            for(int i=0;i<x.second;i++){
                res+=x.first;
            }
        }
        return res;
    }
};
