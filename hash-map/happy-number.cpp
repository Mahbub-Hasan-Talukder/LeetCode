//https://leetcode.com/problems/happy-number/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int getNew(int n){
        int sum = 0;
        while(n){
            sum+=(n%10)*(n%10); n/=10;
            cout << sum << endl;
        }
        return sum;
    }
    bool isHappy(int n) {
        int mp[1000]; memset(mp, 0, sizeof mp);
        while(1){
            int nw = getNew(n);
            if(nw==1)return true;
            if(mp[nw])return false;
            mp[nw] = 1;
            n = nw;
        }
        return true;
    }
};