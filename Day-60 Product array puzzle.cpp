// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) 
    {
        int leftProduct =1,rightProduct =1, n=arr.size();
        vector<int>ans(n, 1);
        for(int i=0; i<n; i++)
        {
            ans[i] = leftProduct;
            leftProduct *= arr[i];
        }
        for(int i=n-1; i>=0; i--)
        {
            ans[i] *= rightProduct;
            rightProduct *= arr[i];
        }
        return ans;
    }
};
