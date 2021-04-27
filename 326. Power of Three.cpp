// 1st solution without loop
class Solution {
public:
    bool isPowerOfThree(int n) {
        int largest = pow(3, 19);

        if(n <= 0)
            return false;
        return largest % n == 0;
        
    }
};

// with loop
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
            return false;
        while(n>1)
        {
            if(n%3!=0)
            {
                return false;
            }
            n /= 3;
        }
        return true;
    }
};
