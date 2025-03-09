

class Solution {
  public:
    int countPS(string &s) {
         int n = s.size();
    int count = 0;
    
    // dp[i][j] is true if the substring s[i...j] is a palindrome.
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    
    // All substrings of length 1 are palindromes but not counted (length must be >=2)
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }
    
    // Check for substrings of length 2
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i+1]) {
            dp[i][i+1] = true;
            count++;  // count palindromes of length 2
        }
    }
    
    // Check for substrings of length greater than 2
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;  // ending index of substring
            if (s[i] == s[j] && dp[i+1][j-1]) {
                dp[i][j] = true;
                count++;  // count palindromes of length >=3
            }
        }
    }
    
    return count;
        
    }
};
