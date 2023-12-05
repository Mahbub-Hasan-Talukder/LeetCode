class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>>st;
        vector<vector<int>>fans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int need = 0 - nums[i];
            int left = i+1, right = n-1;
            while(left<right){
                if(nums[left]+nums[right]>need)right--;
                else if(nums[left]+nums[right]<need)left++;
                else{
                    st.insert({nums[i], nums[left], nums[right]});
                    left++; right--;
                }
            }
        }
        for(auto it:st)fans.push_back(it);
        return fans;
    }
};