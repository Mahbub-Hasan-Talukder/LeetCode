//https://leetcode.com/problems/two-sum/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int>mp;
      vector<int>ans;
      for(int i=0;i<nums.size();i++)mp[nums[i]] = i+1;
      for(int i=0;i<nums.size();i++){
        if(mp[target-nums[i]]>0&&mp[target-nums[i]]!=(i+1)){
            ans.push_back(i); ans.push_back(mp[target-nums[i]]-1); break;
        }
      }
      return ans;
    }
};