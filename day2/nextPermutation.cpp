/*
    Given an array of integers arr[] representing a permutation,
    implement the next permutation that rearranges the numbers 
    into the lexicographically next greater permutation. If no
    such permutation exists, rearrange the numbers into the lowest
    possible order (i.e., sorted in ascending order). 

Note - A permutation of an array of integers refers to a specific 
arrangement of its elements in a sequence or linear order.

Input: arr = [2, 4, 1, 7, 5, 0]
Output: [2, 4, 5, 0, 1, 7]
Explanation: The next permutation of the given array is {2, 4, 5, 0, 1, 7}.


*/
void nextPermutation(vector<int>& arr)
    {
        int N = arr.size();
        int index=-1;
        for(int i=N-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                index=i;
                break;
            }
        }
        if(index==-1)
        {
            reverse(arr.begin(),arr.end());
            return;
        }
        for(int i=N-1;i>index;i--)
        {
            if(arr[i]>arr[index])
            {
                swap(arr[i],arr[index]);
                break;
            }
        }
        reverse(arr.begin()+index+1,arr.end());
    }