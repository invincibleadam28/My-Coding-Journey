bool func(pair<int, int> p1, pair<int, int> p2)
{
  if (p1.first == p2.first) return (p1.second > p2.second);

  return p1.first > p2.first;
}
vector<int> solve(vector<int>& arr)
{
  int n = arr.size();
  vector<pair<int, int>> z;
  vector<int>ans;
  unordered_map<int, int> hmap;

  for (int i = 0; i < n; i++)
  {
    hmap[arr[i]]++;
  }
  for (auto x : hmap)
  {
    z.push_back({x.second, x.first});
  }
  sort(z.begin(), z.end(), func);

  for (auto &x : z)
  {
    while (x.first--)
      ans.push_back(x.second);
  }

  return ans;

}