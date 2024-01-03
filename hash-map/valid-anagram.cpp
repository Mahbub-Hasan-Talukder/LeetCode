//https://leetcode.com/problems/valid-anagram/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    bool isAnagram(string s, string t) {
        int cs[26]={0},ct[26]={0};
        for(int i=0;i<s.size();i++){
            cs[s[i]-'a']++;
        }for(int i=0;i<t.size();i++){
            ct[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)if(cs[i]!=ct[i])return false;
        return true;
    }
};