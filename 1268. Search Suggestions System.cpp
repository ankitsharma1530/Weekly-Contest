class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>>res;
        
        for(int i=0;i<searchWord.length();i++)
        {
            string curr = searchWord.substr(0,i+1);
            vector<string>temp;
            for(auto x:products)
            {
                if(x.length()>=curr.length())
                {
                    if(x.substr(0,i+1)==curr)
                    {
                        temp.push_back(x);
                    }
                }
            }
            sort(temp.begin(),temp.end());
            vector<string>temp1;
            int check =0;
            while(check<3 && check<temp.size())
            {
                temp1.push_back(temp[check]);
                check++;
            }
            res.push_back(temp1);
        }
        return res;
    }
};
