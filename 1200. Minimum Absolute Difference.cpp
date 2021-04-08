class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int min_s = INT_MAX;
        // unordered_set<int>st;
        // st.insert(arr[0]);
        vector<vector<int>>res;
        for(int i=1;i<arr.size();i++)
        {
            // st.insert(arr[i]);
            min_s = min(min_s,arr[i]-arr[i-1]);
        }
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]==min_s)
            {
                res.push_back({arr[i-1],arr[i]});
            }
        }
        return res;
    }
};
