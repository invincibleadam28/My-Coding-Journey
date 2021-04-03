int dp[250][250];
int solve(vector<vector<int>>& matrix) {
  int r = matrix.size();
  int c = matrix[0].size();
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      dp[i][j] = 1e9;
    }
  }
  dp[0][0] = 0;
  if (matrix[r - 1][c - 1] == 1 || matrix[0][0] == 1) return -1;
  queue<pair<int, int>> q;
  q.emplace(0, 0);
  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();
    if (x == r - 1 && y == c - 1) return dp[x][y] + 1;
    int dx[4] {1, 0, -1, 0};
    int dy[4] {0, 1, 0, -1};
    for (int k = 0; k < 4; k++) {
      int nx = x + dx[k];
      int ny = y + dy[k];
      if (nx < 0 || ny < 0 || nx >= r || ny >= c || matrix[nx][ny] == 1) continue;
      if (dp[nx][ny] > 1 + dp[x][y]) {
        dp[nx][ny] = 1 + dp[x][y];
        q.emplace(nx, ny);
      }
    }
  }
  return -1;
}

