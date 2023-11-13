class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ans = 1, cnt = 0;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)ans*=nums[i];
            cnt+=(nums[i]==0);
        }
        for(int i=0;i<nums.size();i++){
            if(cnt>1)nums[i] = 0;
            else if(cnt==1){
                if(nums[i]==0)nums[i] = ans;
                else nums[i] = 0;
            }
            else nums[i] = (ans/nums[i]);
        }
        return nums;
    }
};