class Solution {
  public:
    int maxWater(vector<int> &arr) 
    {
        int waterTrapped = 0;
        int leftMax = 0, rightMax = 0;
        int left=0, right = arr.size()-1;
        while(left<right)
        {
            leftMax = max(leftMax, arr[left]);
            rightMax = max(rightMax, arr[right]);
            if(arr[left]<=arr[right]){
                waterTrapped += leftMax-arr[left];
                left++;
            }
            else{
                waterTrapped += rightMax-arr[right];
                right--;
            }
        }
        return waterTrapped;
    }
};
