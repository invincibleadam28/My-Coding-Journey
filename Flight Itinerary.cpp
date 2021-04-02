vector<string> solve(vector<vector<string>>& flights)
{
  vector<string> ans;
  if (flights.size() == 0) return ans;

  unordered_map<string, string> m;
  unordered_map<string, int> indeg;

  for (auto f : flights)
  {
    indeg[f[0]]++;
    indeg[f[1]]--;
    m[f[0]] = f[1];
  }

  string s, e;

  for (auto x : indeg)
  {
    if (x.second == 1)
      s = x.first;
    if (x.second == -1)
      e = x.first;
  }

  while (1)
  {
    ans.push_back(s);
    if (s == e) return ans;
    s = m[s];
  }

  return ans;


}
