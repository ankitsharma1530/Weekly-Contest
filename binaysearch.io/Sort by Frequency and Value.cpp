static bool cmp(pair<int,int>&a , pair<int,int>&b){
    if(a.second==b.second){
        return a.first>b.first;
    }
    return a.second>b.second;
}
vector<int> solve(vector<int>& nums) {
    unordered_map<int,int>ump;
    for(int i=0;i<nums.size();i++){
        ump[nums[i]]++;
    }
    vector<pair<int,int>>v;
    for(auto x:ump){
        v.push_back(make_pair(x.first,x.second));
    }
    sort(v.begin(),v.end(),cmp);
    vector<int>res;
    for(auto x:v){
        for(int i=0;i<x.second;i++){
            res.push_back(x.first);
        }
    }
    return res;
}
