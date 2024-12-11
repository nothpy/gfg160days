 void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size(), m = b.size();
        int i=0, j=0, k=n-1;
        while(i<n && j<m)
        {
            if(a[i]<=b[j]) i++;
            else{
                swap(a[k--], b[j++]);
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
    }
