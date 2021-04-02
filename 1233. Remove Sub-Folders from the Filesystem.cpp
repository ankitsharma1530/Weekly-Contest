class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        unordered_set<string>s;
        vector<string>res;
        for(int i=0;i<folder.size();i++)
        {
            int size = folder[i].size();
            // int j=1;
            string temp = "";
            bool flag = true;
            for(int j=0;j<size;j++)
            {
                if(isalpha(folder[i][j]))
                {
                    temp.push_back(folder[i][j]);
                }
                else
                {
                    temp.push_back('.');
                    if(s.find(temp)!=s.end())
                    {
                        flag=false;
                        break;
                    }
                }
            }
            temp.push_back('.');
            // if(s.find(temp)!=s.end())
            // {
            //     flag=false;
            // }
            if(flag==true)
            {
                s.insert(temp);
                res.push_back(folder[i]);
            }
            else
            {
                continue;
            }
        }
        return res;
    }
};
