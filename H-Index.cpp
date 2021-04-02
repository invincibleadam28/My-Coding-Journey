int solve(vector<int>& citations)
{
  int n = citations.size();
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++) maxi = max(maxi, citations[i]);
  int arr[maxi + 1] = {0};
  for (int i = 0; i < n; i++) arr[citations[i]] += 1;
  int c = 0;
  for (int i = maxi; i >= 0; i--)
  {
    c += arr[i];
    if (c >= i) return i;

  }
  return 1;

}