// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) 
    {
        unordered_map<string, vector<string>> mpp;
        for(int i=0; i<arr.size(); i++)
        {
            string temp = arr[i];
            sort(temp.begin(), temp.end());
            mpp[temp].push_back(arr[i]);
        }
        vector<vector<string>> ans;
        for( auto x : mpp )
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
