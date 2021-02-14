class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = numBottles; 
        int numB = numBottles; 
        int filled = false;
        int full=0;
        int extra = 0;
        int flag=0;
        while(numB>=numExchange)
        {
            flag = 1;
            if(filled==false)
            {
                full = numB/numExchange;   
                extra = numB%numExchange;    
                numB = full+extra;          
                filled = true;              
            }
            else
            {
                filled = false;            
                count = count+full;        
            }
        }
        if(flag==1)
        {
            count=count+full;
        }
        return count;
    }
};
