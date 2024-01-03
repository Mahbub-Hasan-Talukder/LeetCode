https://leetcode.com/problems/spiral-matrix/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowLow = 0, rowHigh = matrix.size()-1;
        int colLow = 0, colHigh = matrix[0].size()-1;
        vector<int> v;
        int cnt = (rowHigh+1)*(colHigh+1);
        while(rowLow<=rowHigh and colLow<=colHigh){
            for(int i=colLow; i<=colHigh; i++){
                v.push_back(matrix[rowLow][i]);
            }
            rowLow++;
            if(v.size()==cnt)break;
            for(int i=rowLow; i<=rowHigh; i++){
                v.push_back(matrix[i][colHigh]);
            }
            colHigh--;
            for(int i=colHigh; i>=colLow; i--){
                v.push_back(matrix[rowHigh][i]);
            }
            rowHigh--;
            if(v.size()==cnt)break;
            for(int i=rowHigh; i>=rowLow; i--){
                v.push_back(matrix[i][colLow]);
            }
            colLow++;
            if(v.size()==cnt)break;
        }
        
        return v;
    }
    
};