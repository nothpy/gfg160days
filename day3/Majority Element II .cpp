    vector<int> findMajority(vector<int>& arr) {
        vector<int>ans;
        map<int, int>mpp;
        for(int i=0;i<arr.size(); i++)
        {
            mpp[arr[i]]++;
        }
        for(auto x : mpp)
        {
            if(x.second>arr.size()/3)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }