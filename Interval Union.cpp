vector<vector<int>> solve(vector<vector<int>>& intervals) {

  vector<vector<int>> ans;
  int n = intervals.size();

  if (n <= 1) return intervals;

  sort(intervals.begin(), intervals.end());

  for (int i = 0; i < n; i++)
  {
    int k = i;
    int s = intervals[k][0];
    int e = intervals[k][1];
    int end = e;
    while (k < n && end >= intervals[k][0])
    {
      end = max(intervals[k][1], end);
      k++;
    }
    k--;
    ans.push_back({s, end});
    i = k;

  }
  return ans;


}
