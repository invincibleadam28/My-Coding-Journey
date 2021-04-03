int solve(string s) {
  int a = 0, b = 0, c = 0;
  for (char ch : s) {
    a += ch == 'a' ? 1 + a : 0;
    b += ch == 'b' ? a + b : 0;
    c += ch == 'c' ? b + c : 0;
  }
  return c;
}