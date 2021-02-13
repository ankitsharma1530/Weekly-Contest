class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        char check[indices.size()];
        for(int i=0;i<s.length();i++)
        {
            check[indices[i]] = s[i] ; 
        }
        string new_s;
        for(int i=0;i<indices.size();i++)
        {
            new_s = new_s+check[i];
        }
        return new_s;
        
    }
};
