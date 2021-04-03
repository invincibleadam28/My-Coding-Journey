int solve(vector<vector<int>>& intervals) {
  sort(intervals.begin(), intervals.end());
  if (intervals.size() == 0) return 0;
  int ans = intervals[0][1] - intervals[0][0] + 1;
  for (int i = 1; i < intervals.size(); i++) {
    if (intervals[i][0] <= intervals[i - 1][1]) {
      ans += max(0, intervals[i][1] - intervals[i - 1][1]);
      intervals[i][0] = min(intervals[i][0], intervals[i - 1][0]);
      intervals[i][1] = max(intervals[i][1], intervals[i - 1][1]);
    } else
      ans += intervals[i][1] - intervals[i][0] + 1;
  }
  return ans;
}
