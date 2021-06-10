class MyCalendarTwo {
public:
    vector<pair<int,int>>v1;
    vector<pair<int,int>>v2;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        for(int i=0;i<v2.size();i++){
            if((start>=v2[i].first and start<v2[i].second) || (v2[i].first>=start and v2[i].first<end)){
                return false;
        }
        }
        for(int i=0;i<v1.size();i++){
            //  see the leetcode notes
            // the range r1,r2 is having a range r3 common
            // r3 starting and ending points are -> max(s1,s2) and min(e1,e2) respectivly
            if((start>=v1[i].first and start<v1[i].second) || (v1[i].first>=start and v1[i].first<end)){
                v2.push_back({max(v1[i].first,start),min(v1[i].second,end)});
            }
        }
        v1.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
