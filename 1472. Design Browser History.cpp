class BrowserHistory {
public:
    string arr[5001] ; 
    int curr , end;
    BrowserHistory(string homepage) {
        // constructor
        arr[0] = homepage;
        curr = 0;
        end = 0;
    }
    
    void visit(string url) {
        // donot visit the same page 
        if(url!=arr[curr])
        {
            curr++;
            arr[curr] = url;
            end = curr;
        }
    }
    
    string back(int steps) {
        curr = max(0,curr-steps);
        return arr[curr];
    }
    
    string forward(int steps) {
        curr =  min(end,curr+steps);
        return arr[curr];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
