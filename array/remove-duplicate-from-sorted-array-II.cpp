class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), cur=0;
        if(n<=2)return n;
        for(int i=2;i<n;i++){
            if(nums[cur]!=nums[i]){
                nums[cur+2] = nums[i];
                cur++;
            }
        }
        return cur+2;
    }

};