
class Solution {
  public:
    int longestStringChain(vector<string>& words) {
         // Sort words by length
    sort(words.begin(), words.end(), [](const string &a, const string &b) {
        return a.size() < b.size();
    });

    unordered_map<string, int> dp;
    int maxLength = 1;

    for (string word : words) {
        dp[word] = 1; // Minimum chain length for a single word

        // Try removing each character to find predecessors
        for (int i = 0; i < word.size(); i++) {
            string prev = word.substr(0, i) + word.substr(i + 1);
            if (dp.find(prev) != dp.end()) {
                dp[word] = max(dp[word], dp[prev] + 1);
            }
        }

        maxLength = max(maxLength, dp[word]);
    }

    return maxLength;
    }
};
