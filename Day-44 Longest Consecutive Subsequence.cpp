int longestConsecutive(vector<int>& arr) 
    {
        int count=1, longestStreak = 1;
        sort(arr.begin(), arr.end());
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i-1]+1 == arr[i]){
                count = count+1;
                longestStreak = max(count, longestStreak);
            }
            else if(arr[i-1]+1 > arr[i]){
                longestStreak = max(count, longestStreak);
            }
            else  count = 1;
        }
        return longestStreak;
    }
