int solve(vector<int>& arr, int k)
{
  k += 1;
  int n = arr.size();
  if (n == 0) return 0;
  if (n == 1) return arr[0] + k;
  int x;
  for (int i = 1; i < n; i++)
  {
    x = arr[i] - arr[i - 1];
    if (x == 1) continue;
    else
    {
      x = x - 1;
      if (k <= x)
      {
        return arr[i - 1] + k;
      }
      else
      {
        k = k - x;
      }
    }
  }
  return arr[n - 1] + k;

}