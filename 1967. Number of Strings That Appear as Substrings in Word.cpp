class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        unordered_map<char,vector<int>>ump;
        for(int i=0;i<word.length();i++){
            ump[word[i]].push_back(i);
        }
        int c = 0;
        for(auto x:patterns){
            if(ump.find(x[0])!=ump.end()){
                int l = x.length();
                for(int i=0;i<ump[x[0]].size();i++){
                    if(word.substr(ump[x[0]][i],l)==x){
                        c++;
                        break;
                    }
                }
            }
        }
        return c;
    }
};
