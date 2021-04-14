class Solution {
    bool ischeck(string g1,string g2)
    {
        if(g1.size()!=g2.size())
        {
            return false;
        }
        int i=0;
        while(i<g1.size())
        {
            if(g1[i]!=g2[i])
            {
                return false;
            }
            i++;
        }
        return true;
    }
public:
    vector<string> invalidTransactions(vector<string>& transactions) {
        vector<string>ans;
        for(int i=0;i<transactions.size();i++)
        {
            string h=transactions[i];
            string name;
            string amount;
            string time;
            string city;
            int comma=0 , yu=0;
            while(yu<h.size())
            {
                if(h[yu]==',')
                {
                    comma++;
                    yu++;
                }
                else if(comma==0)
                {
                    name.push_back(h[yu]);
                    yu++;
                }
                else if(comma==1)
                {
                    time.push_back(h[yu]);
                    yu++;
                }
                else if(comma==2)
                {
                    amount.push_back(h[yu]);
                    yu++;
                }
                else if(comma==3)
                {
                    city.push_back(h[yu]);
                    yu++;
                }
            }
            if(stoi(amount)>1000)
            {
                ans.push_back(h);
                continue;
            }
            for(int j=0;j<transactions.size();j++)
            {
                if(j==i)
                {
                    continue;
                }
                string h2=transactions[j];
                string name2;
                string time2;
                string amount2;
                string city2;
                int comma2=0 , qw=0;
                while(qw<h2.size())
                {
                    if(h2[qw]==',')
                    {
                        comma2++;
                        qw++;
                    }
                    else if(comma2==0)
                    {
                        name2.push_back(h2[qw]);
                        qw++;
                    }
                    else if(comma2==1)
                    {
                        time2.push_back(h2[qw]);
                        qw++;
                    }
                    else if(comma2==2)
                    {
                        amount2.push_back(h2[qw]);
                        qw++;
                    }
                    else if(comma2==3)
                    {
                        city2.push_back(h2[qw]);
                        qw++;
                    }
                }
                if(ischeck(name,name2)==true && ischeck(city,city2)==false)
                {
                    int t1=stoi(time);
                    int t2=stoi(time2);
                    if(abs(t2-t1)<=60)
                    {
                        ans.push_back(h);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
