//https://leetcode.com/problems/longest-consecutive-sequence/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        st.insert(nums.begin(), nums.end());
        int mx = 0;
        unordered_map<int,int>vis;
        for(auto n:st){
            if(vis[n])continue;
            int len = 0;
            while(st.find(n)!=st.end()){
                vis[n] = 1;
                len++;
                n++;
            }
            mx = max(mx,len);
        }
        return mx;
    }
};