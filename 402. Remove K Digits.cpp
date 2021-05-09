class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> mystack;
        //Store the final string in stack
        for(char c: num)
        {
            while(!mystack.empty() && k>0 && mystack.top()>c)
            {   mystack.pop();      k-=1;   }
            
            if(!mystack.empty() || c!='0')
                mystack.push(c);
        }
        
        //Now remove the largest values from the top of the stack
        while(!mystack.empty() && k--)
            mystack.pop();
        if(mystack.empty())
            return "0";
        
        //Now retrieve the number from stack into a string (reusing num)
        string res = "";
        while(!mystack.empty())
        {
            res.push_back(mystack.top());
            mystack.pop();
            // n-=1;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
