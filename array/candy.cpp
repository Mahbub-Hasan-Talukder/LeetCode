//problem link: https://leetcode.com/problems/candy/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
  int candy(vector<int>& ratings) {
        int sz = ratings.size();
        vector<int>s(sz,1);
        int ans = 0;
        for(int i=1;i<sz;i++){
            if(ratings[i]>ratings[i-1])s[i] = s[i-1]+1;
        }
        for(int i=sz-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                s[i] = max(s[i],s[i+1]+1);
                
            }
            ans+=s[i];
        }
        ans+=s[sz-1];
 
        return ans;
    }
};