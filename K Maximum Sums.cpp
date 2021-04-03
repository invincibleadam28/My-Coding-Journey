vector<int> solve(vector<int>& nums, int k) {
  priority_queue<int, vector<int>, greater<int>> q;
  multiset<int> prefixvals;
  prefixvals.insert(0);
  int curr = 0;
  for (int i = 0; i < nums.size(); i++) {
    curr += nums[i];
    for (auto pval : prefixvals) {
      int cand = curr - pval;
      if (q.size() == k && cand <= q.top()) break;
      q.push(cand);
      if (q.size() > k) q.pop();
    }
    prefixvals.insert(curr);
    if (prefixvals.size() > k) prefixvals.erase(prefixvals.find(*prefixvals.rbegin()));
  }
  vector<int> ret;
  while (q.size()) {
    ret.push_back(q.top());
    q.pop();
  }
  return ret;
}