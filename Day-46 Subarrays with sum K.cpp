// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) 
    {
        unordered_map<int, int> mpp;
        int count=0, sum=0;
        for(int i=0; i<arr.size(); i++)
        {
            sum += arr[i];
            if(sum==k) count++;
            if(mpp.find(sum-k) != mpp.end()) count += mpp[sum-k];
            mpp[sum]++;
        }
        return count;
    }
};
