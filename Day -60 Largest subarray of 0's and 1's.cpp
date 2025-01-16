class Solution {
  public:
    int maxLen(vector<int> &arr)
    {
        unordered_map<int, int> mpp;
        int prefixSum=0, maxLength=0;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]==0) arr[i]= -1;
        }
        for(int i=0; i<arr.size(); i++)
        {
            prefixSum += arr[i];
            if(prefixSum==0) maxLength = i+1;
            if(mpp.find(prefixSum) != mpp.end()){
                maxLength = max(maxLength, i-mpp[prefixSum]);
            }else{
                mpp[prefixSum] = i;
            }
        }
        return maxLength;
            
    }
};
