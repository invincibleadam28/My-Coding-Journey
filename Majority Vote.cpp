int solve(vector<int>& arr)
{
  int n = arr.size();
  if (n == 1) return 0;

  int k = n / 2;
  for (int i = 0; i < n; i++)
  {
    arr[i] *= (n + 1);
  }
  for (int i = 0; i < n; i++)
  {
    arr[arr[i] / (n + 1)] += 1;
  }
  for (int i = 0; i < n; i++)
  {
    if ((arr[i] % (n + 1)) > k)
      return i;
  }

  return -1;



}
