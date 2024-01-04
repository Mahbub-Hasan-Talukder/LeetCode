//https://leetcode.com/problems/contains-duplicate-ii/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(!mp[nums[i]])mp[nums[i]] = i+1;
            else{
                if(i+1 - mp[nums[i]] <= k)return true;
                mp[nums[i]] = i+1;
            }
        }
        return false;
    }
};