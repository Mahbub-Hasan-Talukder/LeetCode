/*
problem link: https://leetcode.com/problems/zigzag-conversion/?envType=study-plan-v2&envId=top-interview-150
*/

class Solution {
public:
    string convert(string s, int numRows) {
        int N = numRows;
        int n = s.size();
        vector<int>tem;
        for(int i=0;i<N;i++)tem.push_back(i);
        for(int i=N-2;i>0;i--)tem.push_back(i);
        map<int,string>mp;
        for(int i=0;i<N;i++)mp[i] = "";
        for(int i=0;i<n;i++){
            int ind = tem[i%tem.size()];
            mp[ind]+=s[i];
        }
        string fin = "";
        for(auto it:mp){
            fin+=it.second;
        }
        return fin;
    }
};
