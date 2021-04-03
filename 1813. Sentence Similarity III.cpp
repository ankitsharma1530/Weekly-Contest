class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string>v1;
        string temp = "";
        for(int i=0;i<sentence1.size();i++)
        {
            if(sentence1[i]!=' ')
            {
                temp.push_back(sentence1[i]);
            }
            else
            {
                if(temp.length()>0)
                v1.push_back(temp);
                temp="";
            }
        }
        if(temp.length()>0)
            v1.push_back(temp);
        vector<string>v2;
        string temp1 = "";
        for(int i=0;i<sentence2.size();i++)
        {
            if(sentence2[i]!=' ')
            {
                temp1.push_back(sentence2[i]);
            }
            else
            {
                if(temp1.length()>0)
                    v2.push_back(temp1);
                temp1="";
            }
        }
        if(temp1.length()>0)
            v2.push_back(temp1);
        int n = v1.size();
        int m = v2.size();
        if(n==1 || m==1)
        {
            if(v1[0]==v2[0] || v1[n-1]==v2[m-1])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        unordered_set<string>s1;
        unordered_set<string>s2;
        for(int ii=0;ii<n;ii++)
        {
            s1.insert(v1[ii]);
        }
        for(int ii=0;ii<m;ii++)
        {
            s2.insert(v2[ii]);
        }
        bool res = true;
        if(n>m)
        {
            for(int i=0;i<m;i++)
            {
                if(s1.find(v2[i])==s1.end())
                {
                    return false;
                }
            }
            int c = 0;
            int i=0;
            int j=0;
            while(i<n &&  j<m)
            {
                if(v1[i]==v2[j])
                {
                    if(c==1)
                    {
                        c=2;
                    }
                    i++;
                    j++;
                }
                else
                {
                    if(c==2)
                    {
                        return false;
                    }
                    c=1;
                    i++;
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(s2.find(v1[i])==s2.end())
                {
                    return false;
                }
            }
            int c = 0;
            int i=0;
            int j=0;
            while(i<n &&  j<m)
            {
                if(v1[i]==v2[j])
                {
                    if(c==1)
                    {
                        c=2;
                    }
                    i++;
                    j++;
                }
                else
                {
                    if(c==2)
                    {
                        return false;
                    }
                    c=1;
                    j++;
                }
            }
        }
        return res;
    }
};
