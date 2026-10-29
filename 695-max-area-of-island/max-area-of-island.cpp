class Solution {
public:
    int bfs(vector<vector<int>>& grid , int i , int j){
        if(i<0||j<0||j>=grid[0].size()||i>=grid.size()||grid[i][j]==0){
            return 0;
        }
        int sum = grid[i][j];
        grid[i][j] = 0;
        sum += bfs(grid,i+1,j);
        sum += bfs(grid,i,j+1);
        sum += bfs(grid,i-1,j);
        sum += bfs(grid,i,j-1);
        return sum;

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxy = 0;
        for(int i = 0 ; i<grid.size() ; i++){
            for(int j = 0 ; j <grid[0].size() ; j++){
                if(grid[i][j]==1){
                    int sum = bfs(grid,i,j);
                    maxy = max(maxy,sum);
                }
            }
        }
        return maxy;
        
    }
};