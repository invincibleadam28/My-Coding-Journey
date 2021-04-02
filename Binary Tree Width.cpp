int solve(Tree* root) {
  queue<pair<Tree*, int>> q{{{root, 1}}};
  int ans = 1;
  while (!q.empty()) {
    int sz = q.size(), l = INT_MAX, r = INT_MIN;
    while (sz-- > 0) {
      auto& p = q.front();
      l = min(l, p.second), r = max(r, p.second);
      if (p.first->left) q.push({p.first->left, 2 * p.second - 1});
      if (p.first->right) q.push({p.first->right, 2 * p.second});
      q.pop();
    }
    ans = max(ans, r - l + 1);
  }
  return ans;
}