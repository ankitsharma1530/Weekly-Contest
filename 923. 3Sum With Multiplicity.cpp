class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int count = 0;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i=0;i<arr.size();i++)
        {
            int temp = target-arr[i];
            int start = i+1;
            int end = n-1;
            while(start<end)
            {
                if((arr[start]+arr[end])>temp)
                {
                    end--;
                }
                else if((arr[start]+arr[end])<temp)
                {
                    start++;
                }
                else if(arr[start]!=arr[end])
                {
                    int l=1;
                    int r=1;
                    while(start+1<end && arr[start]==arr[start+1])
                    {
                        l++;
                        start++;
                    }
                    while(end-1>start && arr[end]==arr[end-1])
                    {
                        r++;
                        end--;
                    }
                    count = count+l*r;
                    count=count%1000000007;
                    start++;
                    end--;
                }
                else
                {
                    count+=(end-start+1)*(end-start)/2;
                    count=count%1000000007;
                    break;
                }
            }
        
        }
        return (int)count;
    }
};
