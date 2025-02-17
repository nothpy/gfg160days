class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) 
    {
        vector<int>ans;
        int j = arr.size()-1;
        sort(arr.begin(),arr.end());
        for(int i=0; i<k; i++)
        {
            ans.push_back(arr[j--]);
        }
        return ans;
    }
};
