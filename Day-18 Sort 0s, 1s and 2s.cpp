void sort012(vector<int>& arr) 
    {
        // low: Keeps track of the next position for 0.
        // mid: Traverses the array to check each element.
        // high: Keeps track of the next position for 2.
        
        int low=0, mid=0 , high = arr.size()-1;
        while(mid<=high)
        {
            if(arr[mid]==0){
                swap(arr[mid], arr[low]);
                mid++, low++;
            }
            else if(arr[mid]==1) mid++;
            else{
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
