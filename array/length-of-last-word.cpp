class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0, last = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(cnt>0)last = cnt;
                cnt = 0;
            }
            else if(s[i]!=' ')cnt++;
        }
        if(cnt>0)last = cnt;
        return last;
    }
};