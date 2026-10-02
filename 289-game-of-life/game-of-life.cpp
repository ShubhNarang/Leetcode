class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> a=board;
        for(int i = 0 ; i < board.size() ; i++){
            for(int j = 0 ; j < board[0].size() ; j++){
                int count = 0;
                if(j+1<board[0].size() && board[i][j+1]==1){
                    count++;
                }
                if(i+1<board.size() && board[i+1][j]==1){
                    count++;
                }
                if(i-1>=0 && board[i-1][j]==1){
                    count++;
                }
                if(j-1>=0 && board[i][j-1]==1){
                    count++;
                }
                if(j+1<board[0].size() && i+1<board.size() && board[i+1][j+1]==1){
                    count++;
                }
                if(j+1<board[0].size() && i-1>=0 && board[i-1][j+1]==1){
                    count++;
                }
                if(j-1>=0 && i-1>=0 && board[i-1][j-1]==1){
                    count++;
                }
                if(j-1>=0 && i+1<board.size() && board[i+1][j-1]==1){
                    count++;
                }
                if(count == 3 && board[i][j]==0){
                    a[i][j]=1;
                    continue;
                }
                if(count <= 1 || count >= 4){
                    a[i][j]=0;
                }
                if((count == 2 || count == 3) && board[i][j]==1){
                    a[i][j]=1;
                }

            }

        }
        board = a;
        
    }
};