// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) 
    {
        sort(arr.begin(), arr.end());
        int s=0, e=arr.size()-1;
        int diff = INT_MAX;
        vector<int> ans;
        while(s<e)
        {
            int sum = arr[s]+arr[e];
            if(abs(target-sum)<diff)
            {
                diff = min(abs(target-sum),diff);
                ans = {arr[s], arr[e]};
            }
            if(sum<target) s++;
            else if(sum>target) e--;
            else return ans;
        }
        return ans;
    }
};
