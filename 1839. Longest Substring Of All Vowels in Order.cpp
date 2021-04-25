class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int res = 0;
        int len = 0;
        int n = word.length();
        char p = '.';
        int j=0;
        // string temp = "";
        while(j<n)
        {
            
            if((p=='.'&&word[j]=='a')||((p=='a'&&(word[j]=='a'||word[j]=='e'))||(p=='e'&&(word[j]=='i'||word[j]=='e')) || (p=='i'&&(word[j]=='i'||word[j]=='o')) || (p=='o'&&(word[j]=='o'||word[j]=='u')) || (p=='u'&&(word[j]=='u'))))
            {
                // enter
                len++;
                if(word[j]=='u')
                {
                    res=max(res,len);
                }
                p=word[j];
                
            }
            else
            {
                if(word[j]=='a')
                {
                    len=1;
                    p='a';
                }
                else
                {
                len=0;
                p='.';
                }
                // j--;
            }
            j++;
        }
        return res;
    }
};
