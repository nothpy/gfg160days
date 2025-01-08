class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) 
    {
        int n= arr.size();
        int count =0;
        sort(arr.begin(), arr.end());
        for(int i=n-1; i>=2; i--)
        {
            int k=0, j=i-1;
            while(k<j)
            {
                if(arr[k]+arr[j]> arr[i]){
                    count+= (j-k);
                    j--;
                }
                else k++;
            }
        }
        return count;
    }
};
