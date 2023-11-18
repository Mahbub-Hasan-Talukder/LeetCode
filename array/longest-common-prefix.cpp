class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ind = 0;
        char c;
        while(1){
            for(int i=0;i<strs.size();i++){
                if(i==0 and ind<strs[i].size())c = strs[i][ind];
                else if(strs[i].size()==ind || c!=strs[i][ind]){
                    string ans = "";
                    for(int j = 0;j<ind;j++)ans+=strs[i][j];
                    return ans;
                }
            }
            ind++;
        }
        return "";
    }
};