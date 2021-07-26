class Solution {
public:
    int findIntegers(int n) {
        int theMemo[33] = {0};
        theMemo[0] = 1;
        theMemo[1] = 2;
        
        for(int i =2; i< 33;i++)
        {
            theMemo[i] = theMemo[i-1]+theMemo[i-2];
        }
        
        int theCount = 0;
        int k = 30;
        int theLastDigit = 0;
        
        while(k >= 0){
            
            if(n&(1<<k)){
                theCount+=theMemo[k];
                if(theLastDigit){
                    return theCount;
                }
                theLastDigit =1;
            }
            else
            {
                theLastDigit =0;
            }
            k--;
        }
        
        return theCount+1;
    }
};
