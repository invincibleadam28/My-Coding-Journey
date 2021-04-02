vector<int> solve(string a, string b) {
  vector<int> c(26, 0);
  vector<int> ans;
  int j = 0;
  for (int i = 0; i < a.size(); i++) {
    c[a[i] - 'a']++;
    c[b[i] - 'a']--;
    if (count(c.begin(), c.end(), 0) == 26) {
      ans.push_back(j);
      j = i + 1;
    }
  }
  if (count(c.begin(), c.end(), 0) != 26) ans.clear();
  return ans;
}
