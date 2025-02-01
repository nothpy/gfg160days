class Solution {
  public:
    bool isWordExist(vector<vector<char>>& mat, string& word)
    {
        int n = mat.size(), m = mat[0].size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++){
                if(dfs(mat, word, i, j, 0))  return true;
            }
        }
        return false;
    }
  private: 
    bool dfs(vector<vector<char>> &mat, string &word, int i, int j, int index)
    {
        if(index == word.size()) return true;
        int n = mat.size(), m=mat[0].size();
        if(i<0 || i>=n || j>=m || mat[i][j]!=word[index]) return false;
        char temp = mat[i][j];
        mat[i][j] = '#';
        bool found = dfs(mat, word, i+1, j,index+1)||
                     dfs(mat, word, i-1, j,index+1)||
                     dfs(mat, word, i, j+1,index+1)||
                     dfs(mat, word, i, j-1,index+1);
        mat[i][j] = temp;
        return found;
    }
};
