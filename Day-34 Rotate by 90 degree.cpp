
class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat)
    {
       int n = mat.size();
       for (int i = 0; i < n; i++) 
       {
           for (int j = i; j < n; j++)
           {
               swap(mat[i][j], mat[j][i]);
           }
       }
       for (int j = 0; j < n; j++)
       {
           for (int i = 0, k = n - 1; i < k; i++, k--) {
               swap(mat[i][j], mat[k][j]);
           }
       }
    }
};
