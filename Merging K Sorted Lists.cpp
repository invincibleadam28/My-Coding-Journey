vector<int> solve(vector<vector<int>>& lists) {
  vector<int>l;
  int n = lists.size();
  for (int i = 0; i < n; i++)
  {
    if (lists[i].empty()) continue;
    for (auto x : lists[i])
    {
      l.push_back(x);
    }
  }
  sort(l.begin(), l.end());
  return l;


}