

class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x)
    {
        int i = 0, n = mat.size(), m = mat[0].size();
        int j=m-1;
        while(i<n)
        {
            if(mat[i][j]==x) return true;
            else if(mat[i][j] > x) j--;
            else if(mat[i][j] < x){
                i++;
                j=m-1;
            }
        }
        return false;
    }
};
