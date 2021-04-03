static bool comp(pair<int, int> A, pair<int, int> B) {
  return A.first < B.first;
}
int solve(vector<int>& nums, vector<int>& costs) {
  vector<pair<int, int>> vec;
  int minn = INT_MAX, ct = 0, cl = 0, sumt = 0, sl = 0;
  for (int i = 0; i < nums.size(); i++) {
    vec.push_back({nums[i], costs[i]});
    sumt += nums[i] * costs[i];
    ct += costs[i];
  }
  sort(vec.begin(), vec.end(), comp);
  for (int i = 0; i < vec.size() - 1; i++) {
    sl += vec[i].first * vec[i].second;
    cl += vec[i].second;
    if (cl > ct - cl)
      minn = min(minn, -1 * sl + sumt - sl + vec[i].first * (cl * 2 - ct));
    else
      minn = min(minn, -1 * sl + sumt - sl + vec[i + 1].first * (cl * 2 - ct));
  }
  return minn == INT_MAX ? 0 : minn;
}


