class ProductOfNumbers {
public:
    vector<int>res;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(res.empty())
        {
            res.push_back(num);
        }
        else
        {
            res.push_back(res.back()*num);
        }
        if(res.back()==0)
        {
            res.clear();
        }
        
    }
    
    int getProduct(int k) {
        int ind = res.size()-k-1;
        if(ind<-1)
        {
            return 0;
        }
        else if(ind==-1)
        {
            return res.back();
        }
        else
        {
            return res.back()/res[ind];
        }
        
    }
};
