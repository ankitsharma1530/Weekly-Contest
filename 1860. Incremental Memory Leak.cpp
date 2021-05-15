class Solution {
public:
    vector<int> memLeak(int m1, int m2) {
        int count = 0;
        int n = 1;
        while(m1>=n || m2>=n)
        {
            // if(m1==m2
            if(m1>=m2)
            {
                m1-=n;
            }
            else
            {
                m2-=n;
            }
            count++;
            n++; 
        }
        vector<int>res;
        res.push_back(++count);
        res.push_back(m1);
        res.push_back(m2);
        
        return res;
    }
};
