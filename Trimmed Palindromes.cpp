int solve(string s) {
  int n = s.length();
  int l, r;
  int c = 0;

  for (int i = 0; i < n; i++) {
    c++;
    l = i - 1;
    r = i + 1;
    while (l >= 0 && r < n) {
      if (s[l] == s[r]) {
        l--, r++;
        c++;
      } else
        break;
    }
    l = i;
    r = i + 1;
    while (l >= 0 && r < n) {
      if (s[l] == s[r]) {
        l--, r++;
        c++;
      } else
        break;
    }
  }
  return c;
}