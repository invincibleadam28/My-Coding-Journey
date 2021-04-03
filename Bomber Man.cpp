int solve(vector<vector<int>>& matrix)
{
  int n = matrix.size();
  int m = matrix[0].size();

  int rows[n] = {0};
  int columns[m] = {0};

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (matrix[i][j] == 1)
      {
        rows[i] = 1;
        columns[j] = 1;
      }
    }
  }
  int r = 0, c = 0;
  for (int i = 0; i < n; i++) if (rows[i] == 0) r++;
  for (int j = 0; j < m; j++) if (columns[j] == 0) c++;

  return r * c;
}
