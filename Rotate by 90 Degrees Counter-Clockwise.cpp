vector<vector<int>> solve(vector<vector<int>>& matrix)
{
  int temp;
  int n = matrix.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      temp = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = temp;
    }
  }
  for (int i = 0; i < n / 2; i++)
  {
    for (int j = 0; j < n; j++)
    {
      temp = matrix[i][j];
      matrix[i][j] = matrix[n - 1 - i][j];
      matrix[n - 1 - i][j] = temp;
    }
  }
  return matrix;


}