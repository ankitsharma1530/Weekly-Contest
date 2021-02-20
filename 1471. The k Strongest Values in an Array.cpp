class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int median = arr[(n-1)/2];
        int start = 0;
        int end = n-1;
        vector<int>res(k);
        int count = 0;
        while(count<k)
        {
            int l = abs(arr[start]-median);
            int r = abs(arr[end]-median);
            if(r>=l)
            {
                res[count] = arr[end];
                end--;
            }
            else
            {
                res[count] = arr[start];
                start++;
            }
            count++;
        }
        return res;
    }
};
