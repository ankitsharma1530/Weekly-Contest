class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int i=0;
	    int j=n-1;
	    int min_ele = *min_element(arr,arr+n);
	    int max_ele = *max_element(arr,arr+n);
	    if(arr[0]==min_ele)
	    {
	        return 0;
	    }
	    int count = 1;
	    while(i<=j)
	    {
	        if(arr[i]==max_ele)
	        {
	            return count;
	        }
	        else if(arr[j]==min_ele)
	        {
	            return n-count;
	        }
	        else
	        {
	            i++;
	            j--;
	            count++;
	        }
	    }
	    return 0;
	}

};
