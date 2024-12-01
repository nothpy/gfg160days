    int maxSubarraySum(vector<int> &arr) {
        int sum = 0;
        int maxSum = INT_MIN;
        for(int i=0; i<arr.size(); i++)
        {
            sum = sum+arr[i];
            maxSum =max(sum, maxSum);
            if(sum<0){
                sum=0;
            }
        }
        return maxSum;
    }
    int minSubarraySum(vector<int> &arr) {
        int sum = 0;
        int minSum = INT_MAX;
        for(int i=0; i<arr.size(); i++)
        {
            sum = sum+arr[i];
            minSum =min(sum, minSum);
            if(sum>0){
                sum=0;
            }
        }
        return minSum;
    }
    int circularSubarraySum(vector<int> &arr) {
        if(arr.size()==0){
            return 0;
        }
        int x=1;
        int result = INT_MIN;
        //IF all array element are negative than
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]>=0){
                x=0;
                break;
            }
            result = max(result, arr[i]);
        }
        if(x) return result;
        
        int maxSum = maxSubarraySum(arr);
        int minSum = minSubarraySum(arr);
        
        int arraySum=0;
        for(int i=0; i<arr.size(); i++)
        {
            arraySum+=arr[i];
        }
        int ans = arraySum-minSum;
        return max(ans, maxSum);
    }
