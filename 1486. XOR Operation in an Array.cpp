class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {
            vec[i] = (start+2*i);
        }
        int res = vec[0];
        for(int i=1;i<n;i++)
        {
            res = res^vec[i];
        }
        return res;
    }
};
