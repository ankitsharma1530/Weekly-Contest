// vector<int> solve(vector<int>& nums) {
//     vector<int>res;
//     stack<pair<int,int>>s;
//     for(int i=0;i<nums.size();i++){
//         if(s.empty()){
//             int x = nums[i];
//             int y = 1;
//             s.push(make_pair(x,y));
//         }
//         else if(nums[i]==s.top().first){
//             int x = nums[i];
//             int y = s.top().second+1;
//             s.push(make_pair(x,y));
//         }
//         else{
//             int x = nums[i];
//             int y = 1;
//             s.push(make_pair(x,y));
//         }
//         if(s.top().second>2){
//             s.top();
//         }
//         else{
//             res.push_back(s.top().first);
//         }
//     }
//     return res;
// }


vector<int> solve(vector<int>& nums) {
    int saved = 0;
    for (int i = 0; i < nums.size();) {
        int j = i + 1;
        while (j < nums.size() && nums[i] == nums[j]) j++;
        for (int a = 0; a < 2 && a < j - i; a++) {
            nums[saved++] = nums[i];
        }
        i = j;
    }
    nums.resize(saved);
    return nums;
}
