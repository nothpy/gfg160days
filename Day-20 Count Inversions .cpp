int merge(vector<int> &arr, int left, int mid, int right)
    {
        int n1 = mid-left+1, n2 = right-mid;
        int a[n1], b[n2];
        for(int i =0; i<n1; i++)  a[i]= arr[left+i];
        for(int i =0; i<n2 ; i++)  b[i]= arr[mid+i+1];
        int i= 0,j=0, k=left , count =0;
        while(i<n1 and j<n2)
        {
            if(a[i]<= b[j]) arr[k++] = a[i++];
            else{
                arr[k++] = b[j++];
                count += (n1-i);
            }
        }
        while(i<n1)  arr[k++] = a[i++];
        while(j<n2)  arr[k++] = b[j++];
        return count;
    }
 
    int mergeSort(vector<int> &arr, int left, int right)
    {
        int count = 0;
        if(left>=right) return count;
        int mid =(left+right)/2;
        count += mergeSort(arr, left, mid);
        count += mergeSort(arr, mid+1, right);
        count += merge(arr, left, mid, right);
        return count;
    }
    
    int inversionCount(vector<int> &arr) {
        return mergeSort(arr, 0 , arr.size()-1);
    }
