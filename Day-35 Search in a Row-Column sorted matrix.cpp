// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x)
    {
      int i = 0, n = mat.size(), m = mat[0].size(); 
      for(int i=0; i<n; i++)
      {
          for(int j=0; j<m; j++){
              if(mat[i][j]==x) return true;
          } 
      }
      return false;
    }
};
