//https://leetcode.com/problems/set-matrix-zeroes/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        const int n = matrix.size(), m = matrix[0].size();
        int row[n], col[m];
        memset(row,0,sizeof row);
        memset(col,0,sizeof col);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!matrix[i][j]){
                    row[i] = 1; col[j] = 1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i] or col[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};