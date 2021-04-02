vector<int> solve(vector<vector<int>>& matrix)
{
  vector<int> ans;
  int n = matrix.size();
  if (n == 0) return ans;
  int m = matrix[0].size();

  int left = 0, right = m - 1, top = 0, bottom = n - 1;
  int dir = 0;

  while (left <= right && top <= bottom)
  {
    if (dir == 0)
    {
      for (int i = left; i <= right; i++)
      {
        ans.push_back(matrix[top][i]);
      }
      top++;
    }
    else if (dir == 1)
    {
      for (int i = top; i <= bottom; i++)
      {
        ans.push_back(matrix[i][right]);
      }
      right--;
    }
    else if (dir == 2)
    {
      for (int i = right; i >= left; i--)
      {
        ans.push_back(matrix[bottom][i]);
      }
      bottom--;
    }
    else
    {
      for (int i = bottom; i >= top; i--)
      {
        ans.push_back(matrix[i][left]);
      }
      left++;
    }
    dir = (dir + 1) % 4;
  }
  return ans;
}