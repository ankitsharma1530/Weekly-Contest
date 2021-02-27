class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j =0;
        string ans = "";
        int c = 0;
        while(i<word1.length() && j<word2.length())
        {
            if(c==0)
            {
                ans.push_back(word1[i]);
                i++;
                c=1;
            }
            else
            {
                ans.push_back(word2[j]);
                j++;
                c=0;
            }
        }
        while(i<word1.length())
        {
            ans.push_back(word1[i++]);
        }
        while(j<word2.length())
        {
            ans.push_back(word2[j++]);
        }
        return ans;
    }
};
