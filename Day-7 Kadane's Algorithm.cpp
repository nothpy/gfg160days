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
