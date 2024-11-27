int missingNumber(vector<int> &arr) {
       int maxEle = 0;
       int minEle =1;
       for(int i=0; i<arr.size(); i++)
       {
           if(arr[i]>=0) minEle =min(minEle, arr[i]);
           maxEle = max(maxEle, arr[i]);
       }
       vector<int> freq(maxEle+1, 0);
       for(int i=0; i<arr.size(); i++)
       {
           if(arr[i]>=0) freq[arr[i]]++;
       }
       int ans = -1;
       for(int i=minEle; i<=maxEle; i++){
           if(freq[i]==0){
               ans = i;
               break;
           }
       }
       return (ans == -1) ? (maxEle+1) : ans;
    }
