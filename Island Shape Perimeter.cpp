int solve(vector<vector<int>>& matrix)
{
  int n = matrix.size();
  int m = matrix[0].size();
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (matrix[i][j] == 1)
      {
        if (i == n - 1 || matrix[i + 1][j] == 0) ans++;
        if (j == m - 1 || matrix[i][j + 1] == 0) ans++;
        if (i == 0 || matrix[i - 1][j] == 0) ans++;
        if (j == 0 || matrix[i][j - 1] == 0) ans++;
      }
    }
  }
  return ans;

}