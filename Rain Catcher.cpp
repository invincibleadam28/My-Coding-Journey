int solve(vector<int>& arr)
{
  int n = arr.size();
  if (n <= 1) return 0;
  int l[n] = {0};
  int r[n] = {0};
  l[0] = arr[0];
  r[n - 1] = arr[n - 1];

  int maxi = INT_MIN;
  for (int i = 1; i < n; i++)
  {
    maxi = max(maxi, arr[i - 1]);
    l[i] = maxi;
  }
  maxi = INT_MIN;
  for (int i = n - 2; i >= 0; i--)
  {
    maxi = max(maxi, arr[i + 1]);
    r[i] = maxi;
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (l[i] > arr[i] && r[i] > arr[i])
    {
      ans += min(l[i], r[i]) - arr[i];
    }
  }
  return ans;

}