//https://leetcode.com/problems/isomorphic-strings/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp1, mp2;
        for(int i=0;i<s.size();i++){
            if(mp1[s[i]] and mp1[s[i]] != t[i])return false;
            if(mp2[t[i]] and mp2[t[i]] != s[i])return false;
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        return true;
    }
};