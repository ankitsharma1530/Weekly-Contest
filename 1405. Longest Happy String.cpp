class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        int n = a+b+c;
        if(a!=0)
        pq.push({a,'a'});
        if(b!=0)
        pq.push({b,'b'});
        if(c!=0)
        pq.push({c,'c'});
        string res = "";
        char p1 = '_';
        char p2 = '_';
        while(!pq.empty())
        {
            auto temp = pq.top();
            pq.pop();
            if(p1==temp.second && p2==temp.second)
            {
                if(pq.empty()==true)
                {
                    return res;    
                }
                auto curr = pq.top();
                pq.pop();
                res = res+curr.second;
                p2=p1;
                p1=curr.second;
                if(--curr.first>0)
                {
                    pq.push(make_pair(curr.first,curr.second));
                }
                pq.push(make_pair(temp.first,temp.second));
            }
            else
            {
                res = res+temp.second;
                p2 = p1;
                p1 = temp.second;
                if(--temp.first>0)
                {
                    pq.push({temp.first,temp.second});
                }
            }
        }
        return res;
    }
};
