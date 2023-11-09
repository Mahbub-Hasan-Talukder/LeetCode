class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, buy = prices[0], n = prices.size();
        for(int i=1;i<n;i++){
            ans = max(ans,prices[i]-buy);
            buy = min(prices[i],buy);
        }
        return ans;
    }
};