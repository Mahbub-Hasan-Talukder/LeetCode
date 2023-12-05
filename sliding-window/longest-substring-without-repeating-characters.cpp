class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int fre[100] = {0};
        int i=0, st = 0, n = s.size(), ans = 0;
        while(i<n and st<n){
            while(i<n and fre[(s[i]-' ')]==0){
                fre[(s[i]-' ')]++;
                i++;
            }
            ans = max(ans, i-st);
            while(st<n and i<n and fre[s[i]-' ']){
                fre[(s[st]-' ')]--;
                st++;
            }
        }
        return ans;
    }
};