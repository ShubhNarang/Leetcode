class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i , int j){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size() || grid[i][j]==0){
            return 0;
        }
        int sum = grid[i][j];
        grid[i][j] = 0;
        sum += dfs(grid,i+1,j);
        sum += dfs(grid,i-1,j);
        sum += dfs(grid,i,j+1);
        sum += dfs(grid,i,j-1);
        return sum;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int maxy=0;
        for(int i = 0; i <grid.size() ; i++){
            for(int j = 0; j < grid[0].size() ; j++){
                if(grid[i][j]>0){
                    int sum = dfs(grid, i, j);
                    if(sum>maxy){
                        maxy = sum;
                    }
                }
            }
        }
        return maxy;
    }
};