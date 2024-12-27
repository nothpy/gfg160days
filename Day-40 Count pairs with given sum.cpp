class Solution {
  public:
    int countPairs(vector<int> &arr, int target) 
    {
        unordered_map<int,int> mpp;
        int n = arr.size(), count=0 ;
        for(int i=0; i<n; i++)
        {
            int diff = target-arr[i];
            if(mpp.find(diff) != mpp.end()){
                count += mpp[diff];
            }
            mpp[arr[i]]++;
        }
        return count;
        
    }
};
