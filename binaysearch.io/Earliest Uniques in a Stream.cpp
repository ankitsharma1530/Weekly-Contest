class EarliestUnique {
    public:
    vector<int>temp;
    int ind ;
    unordered_map<int,int>ump;
    EarliestUnique(vector<int>& nums) {
        for(auto& x:nums){
            ump[x]++;
            temp.push_back(x);
        }
        ind = 0;
    }

    void add(int num) {
        temp.push_back(num);
        ump[num]++;
    }

    int earliestUnique() {
        while(ind<temp.size() and ump[temp[ind]]>1){
            ind++;
        }
        if(ind==temp.size()){
            return -1;
        }
        return temp[ind];
    }
};
