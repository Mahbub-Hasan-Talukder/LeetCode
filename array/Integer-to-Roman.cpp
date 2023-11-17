class Solution {
public:
    map<int,string>mp;
string f(int d, int m){
    if(d<=0)return "";
    else if(d==4||d==9){
        return mp[m]+mp[(d+1)*m];
    }
    else if(d<5){
        return mp[m]+f(d-1,m);
    }
    return mp[5*m]+f(d-5,m);
}
string intToRoman(int n) {
    mp[1]="I";mp[5]="V";mp[10]="X";mp[50]="L";mp[100]="C";
    mp[500]="D";mp[1000]="M";
    
    string ans = "";
    int m = 1, d;
    while(n){
        d = n%10; n/=10;
        ans=f(d,m)+ans;
        m*=10;
    }
    return ans;
}
};