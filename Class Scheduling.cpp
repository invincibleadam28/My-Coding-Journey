int solve(vector<vector<int>>& times) {
  sort(times.begin(), times.end(), [&](auto & a, auto & b) { return a[1] < b[1]; });
  int ans = 0, end = -1;
  for (auto i : times) {
    if (end < i[0]) {
      end = i[1];
      ans++;
    }
  }
  return ans;
}