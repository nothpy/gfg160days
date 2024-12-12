 int countFreq(vector<int>& arr, int target) {
       int count =0, n = arr.size();
       for(int i=0; i<n; i++)
       {
           if(arr[i]==target) count++;
       }
       return count;
    }
