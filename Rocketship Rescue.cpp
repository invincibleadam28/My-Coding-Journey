int solve(vector<int>& w, int l) {
  int n = w.size();

  sort(w.begin(), w.end());
  int i = 0, j = n - 1;
  int ans = 0;
  while (i <= j)
  {
    if (w[i] + w[j] > l)
    {
      ans++;
      j--;
    }
    else
    {
      ans++;
      i++, j--;
    }
  }

  return ans;
}