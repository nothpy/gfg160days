
class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
         deque<int> dq;
    vector<int> result;
    
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        // Remove elements from the front if they are out of this window
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }

        // Remove smaller elements from the back of the deque
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        // Insert current element index
        dq.push_back(i);

        // Add the maximum element of the current window to the result
        if (i >= k - 1) {
            result.push_back(arr[dq.front()]);
        }
    }

    return result;
        
    }
};
