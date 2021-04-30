class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        unordered_set<int>s;
        vector<int>a;
        vector<int>b;
        int i=0;
        int n = 0;
        if(x==1)
        {
            a.push_back(1);
        }
        else
        {
        while(n<=bound)
        {
            n = pow(x,i);
            a.push_back(n);
            i++;
        }
        }
        n = 0;
        i = 0;
        if(y==1)
        {
            b.push_back(1);
        }
        else
        {
        while(n<=bound)
        {
            n = pow(y,i);
            b.push_back(n);
            i++;
        }
        }
        vector<int>res;
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                if(s.find(a[i]+b[j])==s.end() && a[i]+b[j]<=bound)
                {
                    s.insert(a[i]+b[j]);
                    res.push_back(a[i]+b[j]);
                }
            }
        }
        return res;
    }
};
