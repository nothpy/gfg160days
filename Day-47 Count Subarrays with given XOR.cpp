class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int count=0, prefixXor = 0;
        unordered_map<int, int>mpp;
        for(int i=0; i<arr.size(); i++){
            prefixXor ^= arr[i];
            if(prefixXor == k) count++;
            if(mpp.find(prefixXor^k) != mpp.end()) count+=mpp[prefixXor^k];
            mpp[prefixXor]++;
        }
        return count;
    }
};
