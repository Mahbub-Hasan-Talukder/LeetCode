//https://leetcode.com/problems/ransom-note/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int cnt[26]; memset(cnt,0,sizeof cnt);
        for(char c:magazine)cnt[c-'a']++;
        for(char c:ransomNote){
            cnt[c-'a']--;
            if(cnt[c-'a']<0)return false;
        }
        return true;
    }
};