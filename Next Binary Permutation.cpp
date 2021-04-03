int solve(int n) {
  string s = "";
  for (int i = 0; i < 32; i++) {
    s = ((n & (1 << i)) == 0 ? '0' : '1') + s;
  }

  int k = 30;
  for (; k >= 0; k--) {
    if (s[k] < s[k + 1]) break;
  }
  if (k < 0) {
    reverse(s.begin(), s.end());
  } else {
    int l = 31;
    for (; l >= 0; l--) {
      if (s[l] > s[k]) break;
    }
    swap(s[l], s[k]);
    reverse(s.begin() + k + 1, s.end());
  }

  int ans = 0;
  int curr = 1;
  for (int i = 31; i >= 0; i--) {
    ans += (s[i] - '0') * curr;
    curr *= 2;
  }
  return ans;
}


