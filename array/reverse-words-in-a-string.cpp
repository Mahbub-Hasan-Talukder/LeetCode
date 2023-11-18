class Solution {
public:
    string reverseWords(string s) {
        stack<string>sk1;
        string tmp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(tmp.size()){
                    sk1.push(tmp);
                    tmp = "";
                }
            }
            else tmp+=s[i];
        }
        if(tmp.size())sk1.push(tmp);
        string ans = "";
        while(!sk1.empty()){
            ans+=sk1.top()+" ";
            sk1.pop();
        }
        ans.pop_back();
        return ans;
    }
};