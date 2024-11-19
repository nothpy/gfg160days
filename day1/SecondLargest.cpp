int getSecondLargest(vector<int> &arr)
{
    int max1 = 0;
    int max2 = -1;
    
    for(int i = 0; i < arr.size() ; i++) 
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
         {
            max2 = arr[i];
        }
    }
    if(max2==0)
      return -1;
    else{
        return max2;
    }  
}