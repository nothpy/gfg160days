    vector<int> findSplit(vector<int>& arr) {
        int n = arr.size();
        int sum =0;
        for(int x: arr) sum+=x;
        if(sum%3) return {-1, -1};
        int requiredSum = sum/3;
        sum = 0;
        vector<int>ans;
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
            if(sum==requiredSum)
            {
                 ans.push_back(i);
                 if(ans.size()==2) return ans;
                 sum = 0;
            }
        }
        return {-1, -1};
    }
