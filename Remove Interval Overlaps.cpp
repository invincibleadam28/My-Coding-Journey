bool sortbyend(vector<int>& a, vector<int>& b) {
  return a.back() < b.back();
}
int solve(vector<vector<int>>& intervals)
{
  if (intervals.size() <= 1) return 0;

  int ans = intervals.size();

  sort(intervals.begin(), intervals.end(), sortbyend);

  int lastend = intervals[0][0];

  for (auto interval : intervals)
  {
    if (interval[0] >= lastend)
    {
      ans--;
      lastend = interval[1];
    }
  }
  return ans;
}

