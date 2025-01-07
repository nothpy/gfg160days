
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) 
    {
        sort(arr.begin(), arr.end());
        int s=0, e=arr.size()-1, count=0;
        while(s<e)
        {
            int sum = arr[s]+arr[e];
            if(sum>target) e--;
            else if(sum<target) s++;
            else if(sum == target)
            {
                count++;
                int t = s+1;
                while(t<e && arr[t] == arr[t-1]){
                    count++, t++;
                }
                e--;
            }
        }
        return count;
    }
};
