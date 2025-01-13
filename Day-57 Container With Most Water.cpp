        int n=arr.size();
        int left=0,  right=n-1, maxArea=0;
        while(left<right)
        {
            int height = min(arr[left], arr[right]);
            int width = right-left;
            maxArea = max(maxArea, height*width);
            if(arr[left]<arr[right]) left++;
            else right--;
        }
        return maxArea;
