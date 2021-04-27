class Solution {
public:
    int smallestRepunitDivByK(int K) {
        // as 1 is at last that will nver be divide by 2 and 5
        if (K % 2 == 0 || K % 5 == 0) 
            return -1;
        int r = 0;
        for (int N = 1; N <= K; ++N) {
            r = (r * 10 + 1) % K;
            if (r == 0) return N;
        }
        return -1;
    }
};
