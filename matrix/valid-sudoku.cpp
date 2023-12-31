
//https://leetcode.com/problems/valid-sudoku/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();
        for(int i=0;i<row;i+=3){
            for(int j=0;j<col;j+=3){
                int vis[10]={0};
                for(int k=i;k<i+3 and k<row;k++){
                    for(int l=j;l<j+3 and l<col;l++){
                        if(board[k][l]=='.')continue;
                        if(vis[board[k][l]-'0']==1)return false;
                        vis[board[k][l]-'0'] = 1;
                    }
                // cout << i << ' ' << j << endl;
                }
            }
            
        }
        
        for(int i=0;i<row;i++){
            int vis[10] = {0};
            for(int j=0;j<col;j++){
                if(board[i][j]=='.')continue;
                if(vis[board[i][j]-'0']==1)return false;
                vis[board[i][j]-'0'] = 1;
            }
        }
        for(int i=0;i<row;i++){
            int vis[10] = {0};
            for(int j=0;j<col;j++){
                if(board[j][i]=='.')continue;
                if(vis[board[j][i]-'0']==1)return false;
                vis[board[j][i]-'0'] = 1;
            }
        }
        return true;
    }
};
/*

[[".",".","4", ".",".",".", "6","3","."],
[".",".",".",  ".",".",".", ".",".","."],
["5",".",".",  ".",".",".", ".","9","."],

[".",".",".", "5","6",".", ".",".","."],
["4",".","3", ".",".",".", ".",".","1"],
[".",".",".", "7",".",".", ".",".","."],

[".",".",".", "5",".",".", ".",".","."],
[".",".",".", ".",".",".", ".",".","."],
[".",".",".", ".",".",".", ".",".","."]]

*/