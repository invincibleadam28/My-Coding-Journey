bool getSolve(string &s, int i, int j) {
  string ss;
  bool v;
  while (i <= j) {
    if (s[i] == '(') {
      int cnt = 1, o;
      for (o = i + 1; o <= j; ++o) {
        if (s[o] == '(') {
          ++cnt;
        } else if (s[o] == ')') {
          --cnt;
        }
        if (cnt < 1) {
          break;
        }
      }
      v = getSolve(s, i + 1, min(o - 1, j));
      if (o == j) {
        return v;
      }
      if (s[o + 2] == 'o') {
        return v || getSolve(s, o + 5, j);
      }
      return v && getSolve(s, o + 6, j);
    } else if (s[i] == ' ') {
      if (ss == "and") {
        return v && getSolve(s, i + 1, j);
      } else if (ss == "or") {
        return v || getSolve(s, i + 1, j);
      } else {
        v = ss == "true";
      }
      ss.clear();
    } else {
      ss += s[i];
    }
    ++i;
  }
  return ss == "true";
}
bool solve(string s) {
  return getSolve(s, 0, (int)s.length() - 1);
}
