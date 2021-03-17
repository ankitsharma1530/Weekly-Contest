class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int T) {
        int count = 0;
        int min_range = 0;
        int max_range = 0;
        while(max_range<T)
        {
            // check every time in the array
            for(int i=0;i<clips.size();i++)
            {
                int left = clips[i][0];
                int right = clips[i][1];
                if(min_range>=left && right>max_range)
                {
                    max_range = right;
                }
                
            }
            if(max_range==min_range)
            {
                return -1;
            }
            min_range = max_range;
            count++;
        }
        return count;
    }
};
