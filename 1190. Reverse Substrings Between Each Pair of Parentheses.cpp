class Solution {
public:
    string reverseParentheses(string s) {
        // used stack to store the strings
        string curr = "";
        stack<string>st;
        for(int i=0;i<s.length();i++)
        {
            // open case
            if(s[i]=='(')
            {
                st.push(curr);
                curr="";
            }
            // close case
            else if(s[i]==')'){
                reverse(curr.begin(),curr.end());
                string temp = st.top();
                st.pop();
                temp=temp+curr;
                curr=temp;
                
            }
            // other cases
            else
            {
               curr.push_back(s[i]); 
            }
        }
        return curr;
    }
};
