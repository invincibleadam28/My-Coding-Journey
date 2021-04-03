map<int, int> m;
void bfs(vector<vector<int>>& matrix, int i, int j, int prev) {
  if (i < 0 || i >= matrix.size() || j < 0 || j >= matrix[i].size() || matrix[i][j] != prev)
    return;
  matrix[i][j] = -1;
  bfs(matrix, i + 1, j, prev);
  bfs(matrix, i - 1, j, prev);
  bfs(matrix, i, j + 1, prev);
  bfs(matrix, i, j - 1, prev);
}
int solve(vector<vector<int>>& matrix) {
  int i, j, x = 0, ans = 0, prev;
  m.clear();
  for (i = 0; i < matrix.size(); i++) {
    for (j = 0; j < matrix[0].size(); j++) {
      if (matrix[i][j] != -1) {
        m[matrix[i][j]]++;
        prev = matrix[i][j];
        bfs(matrix, i, j, prev);
      }
    }
  }
  for (auto p : m) {
    ans += p.second;
    x = max(x, p.second);
  }
  ans -= x;
  return ans;
}
