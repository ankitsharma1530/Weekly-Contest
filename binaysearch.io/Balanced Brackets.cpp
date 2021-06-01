bool solve(string s) {
    if(s.empty()){
        return true;
    }
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else{
        // if(s[i]=='(')
        if(s[i]=='('){
            st.push('(');
        }
        else{
            if(st.top()=='('){
                st.pop();
            }
            else{
                st.push(')');
            }
        }
        }
    }
    if(st.size()==0)   {
        return true;
    }
    return false;
}
