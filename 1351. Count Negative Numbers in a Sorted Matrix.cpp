class Solution {
public:
 static int binarySearch(const vector<int>& vec)
    {
        int low=0,high=vec.size()-1;
        while(low<=high)
        {   int mid=low+(high-low)/2;
            if(vec[mid]>=0)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        } 
        return vec.size()-(high+1);
    }
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;       
        for(int i=0;i<grid.size();i++)
        {
           count+=binarySearch(grid[i]);
        }
        return count;
    }
};
