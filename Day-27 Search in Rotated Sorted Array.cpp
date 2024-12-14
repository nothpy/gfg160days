// method 1 linear search
 int search(vector<int>& arr, int key) 
    {
       int n=arr.size();
       for(int i=0; i<n; i++)
       {
           if(arr[i]==key) return i;
       }
       return -1;
    }

// binary search 
class Solution {
  public:
    int search(vector<int>& arr, int key) 
    {
        int n = arr.size();
        int right=n-1, left =0;
        while(left<=right)
        {
            int mid = left+(right-left)/2;
            if(arr[mid]==key) return mid;
            if (arr[left] <= arr[mid])
            {
                if (arr[left] <= key && key < arr[mid]) right = mid - 1;
                else left = mid + 1;
            }
            else
            {
                if (arr[mid] < key && key <= arr[right]) left = mid + 1;
                else  right = mid - 1;
            }
            
        }
        return -1;
    }
};
