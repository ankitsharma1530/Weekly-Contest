class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>temp;
        while(k>0){
            temp.push_back(k%10);
            k=k/10;
        }
        reverse(num.begin(),num.end());
        int carry = 0;
        int i=0;
        int j=0;
        vector<int>res;
        while(i<num.size() || j<temp.size() || carry!=0){
            int n = carry;
            if(i<num.size()){
                n+=num[i];
            }
            if(j<temp.size()){
                n+=temp[j];
            }
            carry = n/10;
            res.push_back(n%10);
            i++;
            j++;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
