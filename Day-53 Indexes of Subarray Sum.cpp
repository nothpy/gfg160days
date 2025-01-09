class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) 
    {
        int n = arr.size();
        int start = 0, currentSum=0;
        for(int end =0; end<n ; end++)
        {
            currentSum += arr[end];
            while(currentSum > target && start <= end){
                currentSum -= arr[start];
                start++;
            }
            if(currentSum ==  target){
                return {start+1,  end+1};
            }
        }
        return {-1};
    }
};
