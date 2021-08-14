class Solution {
public:
    // First cancel out all the valid pairs, 
    //  then you will be left with something like  ]]][[[, 
    //  and the answer will be ceil(m/2). Where m is the number of pairs left.
    
    
    int minSwaps(string s) {
        double c = 0;
        stack<char>st;
        for(auto x:s){
            if(st.empty()){
                st.push(x);
            }
            else{
                if(x==']'){
                   if(st.top()=='['){
                       st.pop();
                   } 
                    else{
                        st.push(x);
                    }
                }
                else{
                    st.push(x);
                }
            }
        }
        string temp = "";
        while(!st.empty()){
            temp+=st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        
        for(int i=1;i<temp.length();i+=2){
            if(temp[i]=='['){
                if(temp[i-1]=='['){
                    c+=0.5;
                }
                else{
                    c+=1.0;
                }
            }
            else{
                if(temp[i-1]==']'){
                    c+=0.5;
                }
            }
        }
        return (int)c;
    }
};
