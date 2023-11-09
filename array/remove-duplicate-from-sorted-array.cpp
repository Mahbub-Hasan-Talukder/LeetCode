class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cur = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[cur]!=nums[i])nums[++cur] = nums[i];
        }
        return cur+1;
    }
};