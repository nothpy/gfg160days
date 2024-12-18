class Solution {
  public:
    bool isValid(vector<int>&arr, int n, int k, int maxAllowedPages)
    {
        int students=1, pages=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>maxAllowedPages) return false;
            if(pages+arr[i] <= maxAllowedPages) pages += arr[i];
            else{
                students++;
                pages = arr[i];
            }
        }
        return students > k ? false : true ;
    }
    int findPages(vector<int> &arr, int k)
    {
        int n=arr.size(), sum=0;
        if(k>n) return -1;
        for(int i=0; i<n; i++) sum+=arr[i];
        int ans=-1, start=0, end=sum;
        while(start<=end)
        {
            int mid = start+(end-start)/2;
            if(isValid(arr, n, k, mid))
            {
                ans=mid;
                end=mid-1;
            }
            else start = mid+1;
        }
        return ans;
    }
};
