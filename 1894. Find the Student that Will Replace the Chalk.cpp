class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        vector<long long>arr(n,0);
        arr[0] = chalk[0];
        for(int i=1;i<n;i++){
            arr[i] = arr[i-1]+chalk[i];
        }
        // cout<<arr[n-1]<<endl;
        int rem = k%arr[n-1];
        for(int i=0;i<n;i++){
            if(chalk[i]>rem){
                return i;
            }
            rem = rem-chalk[i];
        }
        return -1;
    }
};
