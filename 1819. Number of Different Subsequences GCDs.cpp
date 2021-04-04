class Solution {
public:
    int countDifferentSubsequenceGCDs(vector<int>& nums) {
        // the max GCD can be the max number present in the array given to us
        // and here we will check for all the number from 1 to max_number and check wether they are
        // GCD of any subset or not
        
        // first of all we will check which element is present in our array or not
        int max_ele = *max_element(nums.begin(),nums.end());
        vector<bool>ispresent(max_ele+1,false);
        for(auto x:nums)
        {
            ispresent[x] =true;
        }
        int count = 0;
        
        // check for all possible number from 1 to max_ele
        for(int i=1;i<=max_ele;i++)
        {
            // if it is present in our array then increment our count
            // this is the case for 1 length of subsets
            if(ispresent[i]==true)
            {
                count++;
            }
            else
            {
                // checking for numbers presnt in the array that can be divided by i
                // and also make a subsequence with each other
                int g = 0;
                for(int j=i;j<=max_ele;j=j+i)
                {
                    
                    if(ispresent[j]==true)
                    {
                        g = __gcd(g,j); 
                    }
                    
                }
                if(g==i)
                {
                    count++;
                }
            }
        }
        return count;
    }
};
