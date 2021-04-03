vector<vector<int>> solve(vector<vector<int>>& intervals, vector<int>& cut)
{
  vector<vector<int>> ans;
  sort(intervals.begin(), intervals.end());
  int n = intervals.size();
  for (int i = 0; i < n; i++)
  {
    int s = intervals[i][0];
    int e = intervals[i][1];

    if (cut[0] <= s && cut[1] >= e)
    {
      continue;
    }

    if (s <= cut[0] && cut[0] <= e && e <= cut[1])
    {
      ans.push_back({s, cut[0]});
      continue;
    }
    if (cut[0] <= s && s <= cut[1] && cut[1] <= e)
    {
      ans.push_back({cut[1], e});
      continue;
    }
    if (cut[0] >= s && cut[0] <= e && cut[1] >= s && cut[1] <= e)
    {
      ans.push_back({s, cut[0]});
      ans.push_back({cut[1], e});
      continue;
    }
    ans.push_back(intervals[i]);

  }
  return ans;

}