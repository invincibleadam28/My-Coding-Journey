void find(int n, int k, vector<int>& ans) {
  if (n > k) return;

  ans.push_back(n);
  find(n * 10, k, ans);
  for (int i = 1; i <= 9; i++) {
    find(n * 10 + i, k, ans);
  }
}

vector<int> solve(int n) {
  vector<int> ans;
  int i = 1;
  while (i <= 9) {
    find(i, n, ans);
    i++;
  }
  return ans;
}
