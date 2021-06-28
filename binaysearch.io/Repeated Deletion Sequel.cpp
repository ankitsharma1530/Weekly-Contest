string solve(string s, int k) {
    stack<char>st;
    int i = 0;
    int n = s.length();
    while(i<n){
        st.push(s[i]);
        if(st.size()>=k){
            string temp = "";
            int ind = 0;
            char check = st.top();
            while(ind<k){
                if(check!=st.top()){
                    int p=temp.length()-1;
                    while(p>=0){
                        st.push(temp[p]);
                        p--;
                    }
                    break;
                }
                else{
                    temp = temp+st.top();
                    st.pop();
                }
                ind++;
            }
        }
        i++;
    }
    string res = "";
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
