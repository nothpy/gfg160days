//Method 1
int aggressiveCows(vector<int> &stalls, int k) 
    {
        sort(stalls.begin(), stalls.end());
        int minDistance = 1;
        int maxDistance = stalls.back() - stalls.front(); 
        int result = 0;
        while (minDistance <= maxDistance)
        {
            int mid = minDistance + (maxDistance - minDistance) / 2; 
            int cowPlacing = 1; 
            int lastPositionCow = stalls[0];
            for (int i = 1; i < stalls.size(); i++)
            {
                if (stalls[i] - lastPositionCow >= mid) 
                {
                    cowPlacing++;
                    lastPositionCow = stalls[i];
                }    
            }
            if (cowPlacing >= k)
            {
                result = mid; 
                minDistance = mid + 1; 
            }
            else maxDistance = mid - 1; 
        }
        return result;
    }

// method 2
// User function Template for C++

class Solution {
  public:
    bool isFeasible(const vector<int>& stalls, int k, int minDist)
    {
        int count = 1; 
        int lastPosition = stalls[0]; 
        for (int i = 1; i < stalls.size(); i++)
        {
            if (stalls[i] - lastPosition >= minDist)
            {
                count++; 
                lastPosition = stalls[i]; 
                if (count == k) return true; 
            }
        }
        return false; 
    }
    int aggressiveCows(vector<int> &stalls, int k) 
    {
        sort(stalls.begin(), stalls.end());
        int low = 1, result = 0; 
        int high = stalls.back() - stalls.front(); 
        while (low <= high) 
        {
            int mid = low + (high - low) / 2; 
            if (isFeasible(stalls, k, mid)) 
            {
                result = mid; 
                low = mid + 1;
            }
            else high = mid - 1; 
        }
        return result;
    }
};
