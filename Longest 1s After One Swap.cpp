int solve(string s) {
  if (s.empty()) return 0;
  vector<pair<int, int>> intervals;
  int ones = 0;
  for (int i = 0, j = -1; i <= s.size(); i++) {
    if (i == s.size() || s[i] == '0') {
      if (j == -1) continue;
      intervals.push_back({j, i - 1});
      j = -1;
    } else {
      ones++;
      if (j == -1) j = i;
    }
  }

  if (intervals.empty()) return 0;

  int maxLen = intervals[0].second - intervals[0].first + 1;

  for (int i = 1; i < intervals.size(); i++) {
    int l1 = intervals[i - 1].second - intervals[i - 1].first + 1;
    int l2 = intervals[i].second - intervals[i].first + 1;
    if (intervals[i].first - intervals[i - 1].second == 2) {
      if (l1 + l2 + 1 <= ones) {
        maxLen = max(maxLen, l1 + l2 + 1);
      } else if (l1 + l2 != s.size()) {
        maxLen = max(maxLen, l1 + l2);
      }
    }
    maxLen = max(maxLen, 1 + max(l1, l2));
  }
  return maxLen;
}

