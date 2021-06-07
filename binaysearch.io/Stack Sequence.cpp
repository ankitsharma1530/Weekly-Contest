bool solve(vector<int>& pushes, vector<int>& pops) {
    int i=0;
    int j=0;
    stack<int>s;
    // s.push(pushes[0]);

    while(i<pushes.size() || j<pops.size()){
        if(s.empty()){
            s.push(pushes[i]);
            i++;
        }
        else if(s.top()!=pops[j] and i<pushes.size()){
            s.push(pushes[i]);
            i++;
        }
        else if(s.top()==pops[j]){
            s.pop();
            j++;
        }
        else{
            return false;
        }
    }
    return true;
}
