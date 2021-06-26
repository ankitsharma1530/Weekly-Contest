class Solution {
public:
    void merge(vector<pair<int,int>>& arr,vector<int>& count,int left,int mid,int right){
        vector<pair<int,int>>temp(right-left+1);
        int i = left;
        int j = mid+1;
        int k = 0;
        while(i<=mid and j<=right){
            // sorting in descending order
            if(arr[i].first<=arr[j].first){
                temp[k++] = arr[j++];
            }
            else{
                count[arr[i].second]+=right-j+1;
                temp[k++] = arr[i++];
            }
        }
        while(i<=mid){
            temp[k++] = arr[i++];
        }
        while(j<=right){
            temp[k++] = arr[j++];
        }
        for(int ind=left;ind<=right;ind++){
            arr[ind] = temp[ind-left];
        }
    }
    void mergesort(vector<pair<int,int>>& arr, vector<int>& count, int left, int right){
        if(right>left){
            int mid = left+(right-left)/2;
            mergesort(arr,count,left,mid);
            mergesort(arr,count,mid+1,right);
            merge(arr,count,left,mid,right);
        }
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int>count(n,0);
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++){
            arr.push_back(make_pair(nums[i],i));
        }
        mergesort(arr,count,0,n-1);
        return count;
    }
};
