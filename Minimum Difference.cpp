int solve(vector<int>& lst0, vector<int>& lst1) {
  sort(begin(lst0), end(lst0));
  sort(begin(lst1), end(lst1));

  int i = 0, j = 0;
  int ans = INT_MAX;

  while (i < lst0.size()) {
    while (j < lst1.size() - 1 && abs(lst0[i] - lst1[j]) >= abs(lst0[i] - lst1[j + 1])) j++;

    ans = min(ans, abs(lst0[i++] - lst1[j]));
  }

  return ans;
}
