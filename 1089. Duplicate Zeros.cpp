class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>temp;
        int n = arr.size();
        int i=0;
        int j=0;
        while(i<n && j<n)
        {
            if(arr[i]==0)
            {
                i++;
                temp.push_back(0);
                temp.push_back(0);
                j=j+2;
            }
            else
            {
                temp.push_back(arr[i]);
                j++;
                i++;
            }
        }
        while(temp.size()>n)
        {
            temp.pop_back();
        }
        arr =temp;
    }
};
