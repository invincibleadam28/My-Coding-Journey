int solve(vector<int>& weights, vector<int>& values, int capacity) {
  int l = weights.size(), ans = 0, idx;
  vector<pair<double, int>> fraction;
  for (int i = 0; i < l; i++) {
    fraction.push_back({(1.0 * values[i]) / weights[i], i});
  }
  sort(fraction.begin(), fraction.end(), [&](auto & a, auto & b) { return a.first > b.first; });
  for (int i = 0; i < l; i++) {
    idx = fraction[i].second;
    if (capacity >= weights[idx]) {
      capacity -= weights[idx];
      ans += values[idx];
    } else {
      ans += floor(fraction[i].first * capacity);
      break;
    }
  }
  return ans;
}
