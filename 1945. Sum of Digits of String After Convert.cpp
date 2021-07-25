class Solution {
public:
    int getLucky(string s, int k) {
        unordered_map<char,int>ump;
        int i = 1;
        for(char c='a';c<='z';c++){
            ump[c] = i;
            i++;
        }
        string t = "";
        for(auto x:s){
            t+=to_string(ump[x]);
        }
        // cout<<t<<endl;
        int num = -1;
        while(s.length()>=1 and k--){
            int sum = 0;
            for(auto x:t){
                sum+=x-'0';
            }
            num = sum;
            t = to_string(sum);
        }
        return num;
    }
};
