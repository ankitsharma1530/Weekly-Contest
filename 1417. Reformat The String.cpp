class Solution {
public:
    string reformat(string s) {
        queue<char>m1;
        queue<char>m2;
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i])==true)
            {
                m1.push(s[i]);
            }
            else
            {
                m2.push(s[i]);
            }
        }
        if(m1.size()-1==m2.size() || m2.size()-1==m1.size() || m1.size()==m2.size())
        {
            string res = "";
            int flag = 0;
            if(m1.size()>m2.size())
            {
                flag = 1;
            }
            else if(m1.size()<m2.size())
            {
                flag=-1;
            }
            while(!m1.empty() && !m2.empty())
            {
                char i = m1.front();
                m1.pop();
                char j = m2.front();
                m2.pop();
                if(flag==1 || flag==0)
                {
                res.push_back(i);
                res.push_back(j);
                }
                else if(flag==-1)
                {
                    res.push_back(j);
                    res.push_back(i);
                }
            }
            if(!m1.empty())
            {
                res.push_back(m1.front());
            }
            if(!m2.empty())
            {
                res.push_back(m2.front());
            }
            return res;
            
        }
        else
        {
            return "";
        }
        
    }
};
