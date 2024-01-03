//https://leetcode.com/problems/game-of-life/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:

    bool valid(int x, int y, int n, int m){
        if(x<0 or x>=n or y<0 or y>=m)return false;
        return true;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        int ans[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j] = board[i][j];
            }
        }
        int dirx[]={1,1,0,-1,-1,-1,0,1};
        int diry[]={0,1,1,1,0,-1,-1,-1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int cnt = 0;
                for(int k=0;k<8;k++){
                    if(valid(i+dirx[k], j+diry[k], n, m) and board[i+dirx[k]][j+diry[k]])cnt++;
                }
                if(board[i][j] and cnt<2)ans[i][j] = 0;
                else if(board[i][j] and cnt>3)ans[i][j] = 0;
                else if(!board[i][j] and cnt==3)ans[i][j] = 1;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                board[i][j] = ans[i][j];
            }
        }
    }
};