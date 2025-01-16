class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) 
    {
        unordered_map<int, int> mpp;
        int maxl=0, pre=0;
        for(int i=0; i<arr.size(); i++){
            pre+=arr[i];
            if(pre ==k){
                maxl = i+1;
            }
            if(mpp.find(pre-k)!= mpp.end()){
                maxl= max(maxl, i-mpp[pre-k]);
            }
            if(mpp.find(pre)== mpp.end()){
                mpp[pre] = i;
            }
        }
        return maxl;
    }
};
