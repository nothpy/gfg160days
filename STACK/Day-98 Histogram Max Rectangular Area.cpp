
class Solution {
  public:
    int getMaxArea(vector<int> &arr) 
    {
         int n = arr.size();
    stack<int> st;
    int maxArea = 0;

    for (int i = 0; i <= n; i++) {
        while (!st.empty() && (i == n || arr[st.top()] > arr[i])) {
            int height = arr[st.top()];
            st.pop();
            int width = st.empty() ? i : (i - st.top() - 1);
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }
    
    return maxArea;
    }
};
