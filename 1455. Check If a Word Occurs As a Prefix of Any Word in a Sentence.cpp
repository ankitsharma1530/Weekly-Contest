class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int index = -1;
        vector<string>vec;
        string temp = "";
        for(int i=0;i<sentence.length();i++)
        {
            
            if(sentence[i]!=' ')
            {
                temp.push_back(sentence[i]);
            }
            else
            {
                vec.push_back(temp);
                temp = "";
            }
        }
        bool flag=false;
        vec.push_back(temp);
        for(int i=0;i<vec.size();i++)
        {
            if(flag==false)
            {
            if(searchWord[0]==vec[i][0])
            {
                int count = 0;
                for(int j=0;j<vec[i].length();j++)
                {
                    if(vec[i][j]==searchWord[j])
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(count==searchWord.length())
                {
                    index = i+1;
                    flag = true;
                }
            }
            else
            {
                continue;
            }
            }
        }
        return index;
    }
};
