// 0(n) space soln
class Solution {
public:
    int minOperations(int n) {
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            vec.push_back((2*i)+1);
        }
        int ans = n/2;
        int start = 0;
        int end = n-1;
        int count = 0 ;
        while(ans--)
        {
            int m = (vec[start]+vec[end])/2;
            count = count+abs(m-vec[start]);
            start++;
            end--;
        }
        return count;
    }
};

// 0(1) space soln
int minOperations(int n) {
        int p=1,s=0;
        while(n-p>0)
        {
            s+=n-p;
            p+=2;
        }
        return s;  
    }
