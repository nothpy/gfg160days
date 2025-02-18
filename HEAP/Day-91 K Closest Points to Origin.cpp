class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>> maxHeap;
        for (const auto& point : points)
        {
            int x = point[0], y = point[1];
            int distanceSquared = x * x + y * y; 
            maxHeap.push({distanceSquared, point});
            if (maxHeap.size() > k)
            {
                maxHeap.pop(); 
            }
        }
        vector<vector<int>> result;
        while (!maxHeap.empty()) 
        {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return result;
    }
};
