int solve(vector<int>& arr)
{
  int n = arr.size();
  if (n == 1) return arr[0];
  if (n == 2) return max(arr[0], arr[1]);
  int l = 0;
  int r = n - 1;
  int mid;
  if (arr[0] < arr[n - 1]) return arr[n - 1];
  while (l < r)
  {
    if (r - l == 1)
    {
      mid = l;
      break;
    }
    mid = (l + r) / 2;
    int x = abs(arr[mid] - arr[l]);
    int y = abs(arr[mid] - arr[r]);

    if (x >= y)
      r = mid;
    else
      l = mid;
  }
  return arr[mid];

}