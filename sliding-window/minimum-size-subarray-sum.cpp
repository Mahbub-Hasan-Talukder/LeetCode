class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, st = 0, sum = 0, n = nums.size(), ans = INT_MAX;
        while(i<n and st<n){
            while(i<n and sum<target)sum+=nums[i++];
            while(st<n and sum>=target){
                ans = min(ans, i-st);
                sum-=nums[st++];
            }
        }
        return (ans==INT_MAX)?0:ans;
    }
};