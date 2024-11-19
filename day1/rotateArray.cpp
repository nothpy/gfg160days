// Time complexity--> O(n^2) 
void rotateArr(vector<int>& arr, int d)
{
    for(int i=0; i<d; i++)
    {
        int temp = arr[0];
        for(int j=0; j<arr.size(); i++)
        {
            arr[j] = arr[j+1];
        }
        arr[arr.size()-1] = temp;
    }    
}

// Total time complexity = O(d) + O(n-d) + O(n) = O(n).
    void rotateArr(vector<int>& arr, int d)
    {
        int n = arr.size();
        d = d % n;
        reverse(arr.begin(), arr.begin()+d);
        reverse(arr.begin()+d, arr.end());
        reverse(arr.begin(), arr.end());
    }