
class Solution {
  public:
    // Function to compute the edit distance between two strings
    int editDistance(string& s1, string& s2) {
            int n = s1.length(), m = s2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0)
                dp[i][j] = j; // Insert all characters of s2
            else if (j == 0)
                dp[i][j] = i; // Remove all characters of s1
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min({dp[i - 1][j],    // Remove
                                    dp[i][j - 1],    // Insert
                                    dp[i - 1][j - 1] // Replace
                                   });
        }
    }
    return dp[n][m];
    }
};
