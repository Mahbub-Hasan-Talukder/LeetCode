/*
problem link: https://leetcode.com/problems/trapping-rain-water/?envType=study-plan-v2&envId=top-interview-150
*/
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int pre[n], suf[n];
        pre[0] = height[0];
        suf[n-1] = height[n-1];
        for(int i=1;i<n;i++)pre[i] = max(pre[i-1],height[i]);
        for(int i=n-2;i>=0;i--)suf[i] = max(suf[i+1],height[i]);
        int ans = 0;
        for(int i=0;i<n;i++){
            ans+=(min(suf[i],pre[i])-height[i]);
        }
        return ans;
    }
};