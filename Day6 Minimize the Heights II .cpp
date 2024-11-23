    int getMinDiff(vector<int> &arr, int k) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int minDiff , minimum, maximum;
        minDiff = arr[n-1]-arr[0];
        
        for(int i=1; i<n; i++){
            if(arr[i]-k<0) continue;
            minimum = min(arr[0]+k, arr[i]-k);
            maximum = max(arr[n-1]-k, arr[i-1]+k);
            minDiff = min(minDiff, maximum-minimum);
        }
        return minDiff;
    }
