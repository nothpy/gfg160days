
class Solution {
  public:
    int lis(vector<int>& arr) {
         vector<int> sub; // Stores the increasing subsequence

    for (int num : arr) {
        // Find the index where 'num' should be placed
        auto it = lower_bound(sub.begin(), sub.end(), num);

        if (it == sub.end()) {
            // Append to LIS if num is greater than all elements in sub
            sub.push_back(num);
        } else {
            // Replace the first element greater than or equal to num
            *it = num;
        }
    }

    return sub.size(); // Length of the longest increasing subsequence
        
    }
};
