class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        // formula figure in leetcode notes
        long long n = 0;
        while((2*n)*(n+1)*(2*n+1)<neededApples){
            n++;
        }
        return 8*n;
    }
};
