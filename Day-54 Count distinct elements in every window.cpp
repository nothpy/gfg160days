
class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        vector<int> ans;
        int n = arr.size();
        int start = 0, end = k-1;
        set<int> temp;
        
        while(end<n)
        {
            for(int j = start; j<= end; j++)
            {
                temp.insert(arr[j]);
            }
            ans.push_back(temp.size());
            temp.clear();
            end++;
            start++;
        }
        return ans;
    }
};
