
int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    int prev2 = cost[0]; // Cost to reach step 0
    int prev1 = cost[1]; // Cost to reach step 1

    for (int i = 2; i < n; i++) {
        int curr = cost[i] + min(prev1, prev2); // Current step cost + min(previous two steps)
        prev2 = prev1;
        prev1 = curr;
    }
    
    return min(prev1, prev2); // Min cost to reach the top
}
