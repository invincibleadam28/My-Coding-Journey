int solve(vector<int>& arr)
{
  int n = arr.size();
  if (n <= 1) return n;
  int l[n] = {0};
  int r[n] = {0};
  l[0] = 1;
  r[n - 1] = 1;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > arr[i - 1]) l[i] += l[i - 1] + 1;
    else l[i] = 1;
  }
  for (int i = n - 2; i >= 0; i--)
  {
    if (arr[i] > arr[i + 1]) r[i] += r[i + 1] + 1;
    else r[i] = 1;
  }
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += max(l[i], r[i]);
  }
  return sum;

}