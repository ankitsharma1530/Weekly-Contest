class Solution {
public:
    string largestOddNumber(string num) {
        int ind = -1;
        for(int i=num.length()-1;i>=0;i--){
            int nums = num[i]-'0';
            if(nums&1){
                ind = i;
                break;
            }
        }
        if(ind == -1){
            return "";
        }
        return num.substr(0,ind+1);
    }
};
