class Solution{
	public:
    	long long findNth(long long N)
{
long ans=0;
long m=1;
while(N!=0)
{
long dig=N%9;
N=N/9;
ans+=(m*dig);
m=m*10;
}
return ans;
}
};
