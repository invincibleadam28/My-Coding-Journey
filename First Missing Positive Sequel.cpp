int solve(vector<int>& arr) {
  int n = arr.size();
  int i, j;
  if (arr[0] == 0)
    j = 0;
  else if (arr[0] == 1)
    j = 1;
  else
    return 1;
  for (i = 0; i < n; i++)
  {
    if (arr[i] != j)
      return j;
    j++;
  }
  return j;
}