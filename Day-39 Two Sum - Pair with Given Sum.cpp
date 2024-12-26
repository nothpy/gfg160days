// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target)
    {
        unordered_map<int, int> mpp;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            int diff = target-arr[i];
            if(mpp.find(diff) != mpp.end()) return true;
            mpp[arr[i]]++;
        }
        return false;
    }
};
