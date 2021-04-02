int solve(vector<vector<int>>& arr) {
  int n = arr.size();
  if (n < 1) return 0;
  vector<int>a(n);
  vector<int>b(n);
  for (int i = 0; i < n; i++) a[i] = arr[i][0];
  for (int i = 0; i < n; i++) b[i] = arr[i][1];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int c = 1, ans = 1;
  int i = 1, j = 0;
  while (i < n && j < n)
  {
    if (a[i] < b[j])
    {
      c++;
      i++;
    }
    else

    {
      c--;
      j++;
    }
    ans = max(ans, c);
  }

  return ans;

}


