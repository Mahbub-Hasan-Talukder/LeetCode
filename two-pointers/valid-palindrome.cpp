class Solution {
public:
    bool valid(char c){
        return ((c>='0' and c<='9') or (c>='A' and c<='Z') or (c>='a' and c<='z'));
    }
    bool isPalindrome(string s) {
        int i=0, j=s.size()-1;
        while(i<j){
            while(i<s.size() and !valid(s[i]))i++;
            while(j>=0 and !valid(s[j]))j--;
            if(i==s.size())break;
            if(j<0)break;
            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);
            if(s[i]!=s[j])return false;
            i++; j--;
        }
        return true;
    }
};