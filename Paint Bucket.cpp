void fill(vector<vector<string>>& matrix, int i, int j, string s, string target)
{
  if (i < 0 || i >= matrix.size() || j < 0 || j >= matrix[0].size())
    return;

  if (matrix[i][j][0] == s[0])
  {
    matrix[i][j][0] = target[0];
    fill(matrix, i + 1, j, s, target);
    fill(matrix, i, j + 1, s, target);
    fill(matrix, i - 1, j, s, target);
    fill(matrix, i, j - 1, s, target);
  }
}


vector<vector<string>> solve(vector<vector<string>>& matrix, int r, int c, string target) {
  string s = matrix[r][c];
  if (target[0] == s[0])
    return matrix;

  fill(matrix, r, c, s, target);

  return matrix;

}