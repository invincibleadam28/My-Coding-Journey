int solve(vector<int>& lst0, vector<int>& lst1) {
  unordered_map<int, int> a;
  int n = lst0.size();
  for (int i = 0; i < n; ++i) a[lst1[i]] = i + 1;
  vector<int> c(n + 1);
  int ret = 0;
  for (int i = n; i-- > 0;) {
    int x = a[lst0[i]];
    for (int u = x; u > 0; u -= u & -u) ret += c[u];
    for (int u = x; u <= n; u += u & -u) ++c[u];
  }
  return ret;
}