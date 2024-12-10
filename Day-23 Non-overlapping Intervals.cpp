 int minRemoval(vector<vector<int>> &intervals) {
        int count =0, n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int i=1, lastTime = intervals[0][1];
        for(int i=1; i<n; i++)
        {
            if(intervals[i][0]<lastTime){
                count++;
                lastTime =min(lastTime, intervals[i][1]);
            }
            else lastTime = intervals[i][1];
        }
        return count;
    }
