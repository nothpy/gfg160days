
class Solution {
  public:
    int count(vector<int>& coins, int sum) {
        vector<int> dp(sum + 1, 0);
    dp[0] = 1; // Base case: There's one way to make sum 0 (by choosing nothing)
    
    for (int coin : coins) {
        for (int i = coin; i <= sum; i++) {
            dp[i] += dp[i - coin];
        }
    }
    
    return dp[sum];
    }
};
