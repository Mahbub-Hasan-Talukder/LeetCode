//https://leetcode.com/problems/rotate-image/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int ans[n][n];
        for(int i=0;i<n;i++){
            vector<int>v;
            for(int j=0;j<n;j++){
                v.push_back(matrix[i][j]);
            }
            for(int j=0;j<n;j++){
                ans[j][n-i-1] = v[j];
            }
            v.clear();
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j] = ans[i][j];
            }
        }
    }
};