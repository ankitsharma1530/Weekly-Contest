class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        // unordered_map<int,int>ump;
        // ump[0]=1;
        long long sum = 0;
        int d = 0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(arr[i]==0)
            {
                d++;
            }
        }
        if(d==arr.size())
        {
            return true;
        }
        else if(sum%3!=0)
        {
            // cout<<"b";
            return false;
        }
        else
        {
            int req = sum/3;
            long long check = 0;
            int i=0;
            int n = arr.size();
            int c = 0;
            while(i<n)
            {
                check+=arr[i];
                if(check==req)
                {
                    c++;
                    check=0;
                }
                i++;
                
            }
            // cout<<"a";
            if(c>=3)
            {
                return true;
            }
            
        }
        return false;
    }
};
