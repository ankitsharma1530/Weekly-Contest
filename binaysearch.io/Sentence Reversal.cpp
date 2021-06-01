vector<string> solve(vector<string>& s) {
    reverse(s.begin(),s.end());
    s.push_back(" ");
    int i=0;
    int n = s.size();
    while(i<n){
        if(s[i]!=" "){
            int start = i;
            while(s[i]!=" " and i<n){
                i++;
            }
            int end = i-1;
            // int start = i;
            // cout<<end<<start<<endl;
            while(start<end){
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }
        else{
            i++;
        }
    }
    s.pop_back();
    return s;
}
