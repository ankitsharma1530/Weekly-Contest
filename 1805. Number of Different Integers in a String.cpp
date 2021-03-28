class Solution {
public:
    int numDifferentIntegers(string word) {
        //Here we try to split the string so that each integer is in a different string.
        // We use vector_TEMP to store splitted strings
        vector<string>temp;
        string s = "";
        for(int i=0;i<word.length();i++)
        {
            if(isdigit(word[i]))
            {
                s.push_back(word[i]);
            }
            else
            {
                if(s.length()>0)
                {
                    temp.push_back(s);
                }
                s = "";
            }
        }
        if(s.length()>0)
        {
            temp.push_back(s);
        }
        // We will use SET so that only unique characters will stored
        set<string>st;
        for(int i=0;i<temp.size();i++)
        {
            string t = temp[i];
            if(t.length()==1)
            {
                st.insert(t);
            }
            else
            {
                
               // Here we try remove each integer's leading zeroes
                while(t[0]=='0' && t.length()>0)
                {
                    int m = t.length()+1;
                    t = t.substr(1,m); 
                }
                // if our string temp[i] contains only ZERO in it , example-"000","00000", then after removing all leading                                   
				// zeros our T.length() will be zero
                if(t.length()==0) 
                {
                    if(st.find("0")==st.end())
                    {
                        st.insert("0");
                    }
                    else
                    {
                        continue;
                    }
                }
                else
                {
                    st.insert(t);
                }
            }
        }
        return st.size();
    }
};
