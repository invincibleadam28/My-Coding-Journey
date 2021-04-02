vector<vector<int>> solve(vector<vector<int>>& matrix)
{
  int n = matrix.size();
  int m = matrix[0].size();

  int row[n];
  int col[m];

  for (int i = 0; i < n; i++)
  {
    int maxi = matrix[i][0];
    for (int j = 0; j < m; j++)
    {
      maxi = max(maxi, matrix[i][j]);
    }
    row[i] = maxi;
  }

  for (int j = 0; j < m; j++)
  {
    int maxi = matrix[0][j];
    for (int i = 0; i < n; i++)
    {
      maxi = max(maxi, matrix[i][j]);
    }
    col[j] = maxi;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      matrix[i][j] = min(row[i], col[j]);
    }
  }
  return matrix;

}
