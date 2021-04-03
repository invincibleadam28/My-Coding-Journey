int solve(string s) {
  int a_right = count(s.begin(), s.end(), 'A');

  int b_left = 0;
  int n = s.size();
  int res = a_right;

  for (int i = 0; i < n; i++) {
    if (s[i] == 'A') {
      a_right -= 1;
    } else {
      b_left += 1;
    }
    res = min(res, a_right + b_left);
  }
  return res;
}
