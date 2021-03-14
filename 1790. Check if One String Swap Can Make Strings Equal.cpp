class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int arr[26]={0};
        int count = 0;
        for(int i=0;i<s1.length();i++)
        {
            arr[s1[i]-'a']++;
            arr[s2[i]-'a']--;
            if(s1[i]!=s2[i])
            {
                count++;
            }
        }
        int flag = 0;
        for(int i =0;i<26;i++)
        {
            if(arr[i]>0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0 && (count==2 || count==0))
        {
            return true;
            
        }
        return false;
    }
};
