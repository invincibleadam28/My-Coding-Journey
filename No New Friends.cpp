bool solve(int n, vector<vector<int>>& friends) {
  int arr[n];
  for (auto &x : friends)
  {
    arr[x[0]] = 113;
    arr[x[1]] = 113;
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 113) return false;
  }
  return true;


}