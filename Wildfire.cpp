void solver(vector<vector<int>>& mat, int i, int j, queue<pair<int, int>> &q)
{
  if (i < 0 || i >= mat.size() || j < 0 || j >= mat[0].size() || mat[i][j] == 0)
  {
    return;
  }

  if (mat[i][j] == 1)
  {
    mat[i][j] = 0;
    q.push({i, j});
  }
}
void findit(vector<vector<int>>& mat, int i, int j, queue<pair<int, int>> &q)
{
  solver(mat, i + 1, j, q);
  solver(mat, i - 1, j, q);
  solver(mat, i, j + 1, q);
  solver(mat, i, j - 1, q);
}

int solve(vector<vector<int>>& mat)
{
  int n = mat.size();
  if (n == 0) return 0;
  int m = mat[0].size();



  queue<pair<int, int>> q;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (mat[i][j] == 2)
        q.push({i, j});
    }
  }
  int ans = 0;

  while (!q.empty())
  {
    int len = q.size();
    for (int k = 0; k < len; k++)
    {
      int i = q.front().first;
      int j = q.front().second;
      findit(mat, i, j, q);
      mat[i][j] = 0;
      q.pop();
    }
    ans++;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (mat[i][j] == 1)
        return -1;
    }
  }

  if (ans == 0)
    return ans;
  return ans - 1;
}
