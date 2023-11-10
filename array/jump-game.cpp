class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)return true;
        if(nums[0]==0)return false;
        for(int i=1;i<nums.size()-1;i++){
            nums[0] = max(nums[0],i+nums[i]);
            if(nums[0]==i)return false;
        }
        return true;
    }
};