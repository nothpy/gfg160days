// User function Template for C++
class Solution {
  public:
    vector<vector<int>> zeroFilling(int i, int j, vector<vector<int>>&mat)
    {
        int n = mat.size(), m = mat[0].size();
        // Filling zero in row
        for(int k=0; k<m; k++) mat[i][k] = 0;
        //Filling zero in column
        for(int k=0; k<n; k++) mat[k][j] = 0;
         return mat;
        
    }
    void setMatrixZeroes(vector<vector<int>> &mat) {
        vector<vector<int>> store;
        int n = mat.size(), m = mat[0].size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++){
                if(mat[i][j]==0) store.push_back({i,j});
            }
        }
        for(int i=0; i<store.size(); i++){
            zeroFilling( store[i][0], store[i][1],  mat);
        }
        
    }
};
