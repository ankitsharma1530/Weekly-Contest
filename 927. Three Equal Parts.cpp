class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        int count = 0;
        for(auto x:arr){
            if(x==1){
                count++;
            }
        }
        if(count==0){
            return {0,(int)arr.size()-1};
        }
        if(count%3!=0){
            return {-1,-1};
        }
        
        // now find how many 1 we want for each partition
        int k = count/3;
        
        // now find the index of first 1 present in First partition
        int i=0;
        for(i=0;i<arr.size();i++){
            // 001101
            if(arr[i]==1){
                break;
            }
        }
        int start = i;
        
        // now we will find index of first 1 in second partition
        int c = 0;
        int j=0;
        for(j=start;j<arr.size();j++){
            if(arr[j]==1){
                c++;
            }
            if(c==k+1){
                break;
            }
        }
        int mid = j;
        
        // same for the third partition 
        c = 0;
        int l=0;
        for(l=mid;l<arr.size();l++){
            if(arr[l]==1){
                c++;
            }
            if(c==k+1){
                break;
            }
        }
        int end = l;
        while(end<arr.size() and arr[end]==arr[mid] and arr[mid]==arr[start]){
            start++;
            end++;
            mid++;
        }
        if(end==arr.size()){
            return {start-1,mid};
        }
        return {-1,-1};
    }
};
