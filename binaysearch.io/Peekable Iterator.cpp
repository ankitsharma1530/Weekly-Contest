class PeekableIterator {
    public:
    int ind ;
    vector<int>arr;
    PeekableIterator(vector<int>& nums) {
        for(auto x:nums){
            arr.push_back(x);
        }
        ind = -1;
    }

    int peek() {
        int temp= ind+1;
        return arr[temp];
    }

    int next() {
        ind++;
        return arr[ind];
    }

    bool hasnext() {
        if(ind==-1 and arr.size()>0){
            return true;
        }
        if(ind<arr.size()-1){
            return true;
        }
        return false;
    }
};
