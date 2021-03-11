class Solution {
public:
    vector<int> closestDivisors(int num) {
        int n = sqrt(num)+ 1;
        // cout<<n<<endl;
        while(n>0)
        {
            if((num+2)%n<=1)
            {
                return {n,(num+2)/n};
            }
            n--;
        }
        return {};
    }
};
