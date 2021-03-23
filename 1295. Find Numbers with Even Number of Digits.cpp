class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto x:nums)
        {
            string temp = to_string(x);
            if(temp.length()%2==0)
            {
                count++;
            }
        }
        return count;
    }
};
