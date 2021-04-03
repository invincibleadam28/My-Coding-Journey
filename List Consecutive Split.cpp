bool solve(vector<int>& nums, int k) {
  int n = nums.size();
  if (n % k != 0) return false;
  multiset<int> m(nums.begin(), nums.end());
  while (m.size() > 0) {
    int siz = m.size();
    int start = *m.begin();
    m.erase(m.begin());
    for (int j = 1; j <= k - 1; j++) {
      if (m.upper_bound(start) == m.end())
        break;
      else {
        auto temp = m.upper_bound(start);
        if (*temp != start + 1) return false;
        start = *temp;
        m.erase(temp);
      }
    }
    if (m.size() != siz - k) return false;
  }
  return true;
}
