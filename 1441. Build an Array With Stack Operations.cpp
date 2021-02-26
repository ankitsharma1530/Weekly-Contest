class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            vec.push_back(i+1);
        }
        int size = target.size();
        vector<string>res;
        int i = 0 ;
        int j=0;
        while(i<vec.size() && j<size)
        {
            res.push_back("Push");
            if(vec[i]!=target[j])
            {
                res.push_back("Pop");
                i++;
            }
            else
            {
                i++;
                j++;
            }
        }
        return res;
    }
};
