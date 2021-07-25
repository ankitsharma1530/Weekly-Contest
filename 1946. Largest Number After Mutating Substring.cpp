class Solution {
public:
    string maximumNumber(string nums, vector<int>& change) {
        bool f = false;
        for(int i=0;i<nums.length();i++){
            if(f==true){
                return nums;
            }
            if((nums[i]-'0')<change[nums[i]-'0']){
                f=true;
                for(int j=i;j<nums.length();j++){
                    // cout<<nums[j]-'0'<<" ";
                    if((nums[j]-'0')<=change[nums[j]-'0']){
                        char ch = change[nums[j]-'0']+'0';
                        nums[j] = ch;
                    }
                    else{
                        return nums;
                    }
                    
                }
            }
        }
        // cout<<endl;
        return nums;
    }
};
