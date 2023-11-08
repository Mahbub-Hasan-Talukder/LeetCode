class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int sz = nums.size(), ind = 0;
        for(int i=0;i<sz;i++){
            if(nums[i]!=val)nums[ind++]=nums[i];
        }
        return ind;
    }
    
};