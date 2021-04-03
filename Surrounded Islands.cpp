int n, m;
vector<vector<int>> mat;
const vector<vector<int>> neighbours = {{1, 0}, { -1, 0}, {0, 1}, {0, -1}};

void dfs(int x, int y)
{
  mat[x][y] = 0;

  for (auto next : neighbours)
  {
    int i = x + next[0];
    int j = y + next[1];

    if (i >= 0 && i < n && j >= 0 && j < m && mat[i][j]) dfs(i, j);

  }
}


int solve(vector<vector<int>>& matrix) {
  mat = matrix;

  n = mat.size();
  m = mat[0].size();

  for (int i = 0; i < m; i++) {
    if (mat[0][i]) dfs(0, i);
    if (mat[n - 1][i]) dfs(n - 1, i);
  }
  for (int i = 0; i < n; i++) {
    if (mat[i][0]) dfs(i, 0);
    if (mat[i][m - 1]) dfs(i, m - 1);
  }

  int ans = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (mat[i][j]) dfs(i, j), ans++;
    }
  }

  return ans;


}
