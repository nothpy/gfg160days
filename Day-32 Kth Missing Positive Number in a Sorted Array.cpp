    int kthMissing(vector<int> &arr, int k)
    {
        int count=0, j=0 , i=1 , n=arr.size();
        int ans = 0;
        while(count<k)
        {
            if(i==arr[j] && j<n ){
                i++;
                j++;
            } 
            else{
                ans=i;
                count++;
                i++;
            }
        }
        return ans;;
    }
