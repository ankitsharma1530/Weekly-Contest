class Solution {
public:
    // can also check the TLE code in the submission
    
    // theory in leetcode notes
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        // declaring the end points
        int bottom = grid.size() - 1;
        int right = grid[0].size()-1;
        
        //Top left coordinates
        int top = 0, left = 0;
        
        // here we will iterate for each layer one by one
        // for top=0 and left = 0 (we are iterating for the outermost layer)
        // for top=1 and left = 1 (we are iterating for the 2nd last outer layer)
        // and so on upto the inner most layer
        while(bottom>top&&right>left){
            
            // calculating the total layer elements
            int total_layer_elements = 2*(bottom-top+1) + 2*(right-left+1) - 4;
            // converting the big value of K in smaller one
            int t = k%total_layer_elements;
            while(t--){
            int temp = grid[top][left];
            for(int j = left; j<right; j++){
                grid[top][j] = grid[top][j+1];
            }
            for(int i = top; i<bottom; i++){
                grid[i][right] = grid[i+1][right];
            }
            for(int j = right; j>left; j--){
                grid[bottom][j] = grid[bottom][j-1]; 
            }
            for(int i = bottom; i>top; i--){
                grid[i][left] = grid[i-1][left];
            }
            grid[top+1][left] = temp;
            }
            top++;
            left++;
            bottom--;
            right--;
        }
        return grid;
    }
};
