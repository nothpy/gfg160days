class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr)
    {
        int sum=0, sum1=0;
        int n = arr.size();
        for(int i=0; i<n; i++) sum += arr[i];
        for(int i=0; i<n; i++){
            
            sum -= arr[i];
            if(sum == sum1) return i;
            sum1 += arr[i];
        }
        return -1;
    }
};
