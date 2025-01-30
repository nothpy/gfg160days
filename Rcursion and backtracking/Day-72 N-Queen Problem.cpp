// User function Template for C++

class Solution {
  public:
    void solve(int col, int n, vector<int>&board, vector<vector<int>>&solutions, vector<bool>&rows, vector<bool>&d1, vector<bool>&d2)
    {
        if(col == n){
            solutions.push_back(board);
            return;
        }
        for(int row  =0; row<n ; row++){
            if(!rows[row] && !d1[row+col]&& !d2[row-col+n-1]){
                board[col] = row+1;
                rows[row] = d1[row+col] = d2[row-col+n-1] = true;
                solve(col+1, n, board, solutions, rows, d1, d2);
                rows[row] =  d1[row+col] = d2[row-col+n-1] = false;
            }
        }
    }
    vector<vector<int>> nQueen(int n)
    {
        vector<vector<int>> solutions;
        vector<int> board(n);
        vector<bool> rows(n, false), d1(2*n-1, false), d2(2*n-1, false);
        solve(0, n, board, solutions, rows, d1, d2);
        return solutions;
    }
};
