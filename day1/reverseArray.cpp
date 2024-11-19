void reverseArray(vector<int> &arr)
 {
    int temp;
    int i=0, j = arr.size()-1;
    while(i<j)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        i++;
        j--;
    }
}