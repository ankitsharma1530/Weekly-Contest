class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
         unordered_map<int,int64_t> freq;
         long long int count=0;
         long long int mod = pow(10,9)+7;
         sort(arr.begin(),arr.end());
         for(int i=0;i<arr.size();i++){
             int data = arr[i];
             freq[arr[i]]++;
             for(int j=i-1;j>=0;j--){
                 if(data%arr[j] == 0 && freq.count(data/arr[j])){
                     freq[data] = (freq[data]+(freq[arr[j]] * freq[data/arr[j]]))%mod;
                 }
             }
             count = (count+freq[data])%mod;
         }
         return count;
    }
};
