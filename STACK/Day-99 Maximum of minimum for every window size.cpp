

class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) 
    {
        
    int n = arr.size();
    vector<int> left(n, -1), right(n, n);
    stack<int> s;
    
    // Find previous smaller element for each element
    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[s.top()] >= arr[i]) s.pop();
        if (!s.empty()) left[i] = s.top();
        s.push(i);
    }
    
    while (!s.empty()) s.pop();
    
    // Find next smaller element for each element
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && arr[s.top()] >= arr[i]) s.pop();
        if (!s.empty()) right[i] = s.top();
        s.push(i);
    }
    
    vector<int> ans(n + 1, INT_MIN);
    
    // Compute the answer for each window size
    for (int i = 0; i < n; i++) {
        int len = right[i] - left[i] - 1;
        ans[len] = max(ans[len], arr[i]);
    }
    
    // Fill remaining values
    for (int i = n - 1; i >= 1; i--) {
        ans[i] = max(ans[i], ans[i + 1]);
    }
    
    ans.erase(ans.begin()); // Remove the extra element at index 0
    return ans;

    }
};
