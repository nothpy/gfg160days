  int kthElement(vector<int>& a, vector<int>& b, int k) {
        int n = a.size(), m = b.size();
        int i=0, j=0, q=n-1;
        int kthEle=0;
        while(i<n && j<m)
        {
            if(a[i]<=b[j]) i++;
            else{
                swap(a[q--], b[j++]);
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int p=0; p<n; p++)
        {
            kthEle++;
            if(kthEle == k) return a[p];
        }
        for(int p=0; p<m;  p++ )
        {
            kthEle++;
            if(kthEle==k) return b[p];
        }
    }
