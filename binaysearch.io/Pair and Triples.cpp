bool solve(string s) {
    if(s.length()<2)
    {
        return false;
    }
    int n = s.length();
    unordered_map<char,int>ump;
    for(int i=0;i<n;i++)
    {
        ump[s[i]]++;
    }
    bool flag = false;
    for(auto& x:ump)
    {
        // cout<<x.second<<endl;
        if(x.second%3!=0 && x.second%3!=2)
        {
            return false;
        }
        if(x.second%3==2)
        {
            if(flag==true)
            {
                return false;
            }
            flag = true;
        }

    }
    if(flag==true)
    return true;
    return false;
}
