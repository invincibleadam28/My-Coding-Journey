int solve(int n) {
  int ans = 0;
  int c = 0;
  while (n > 0)
  {
    if (n % 2 == 1) c++;
    else {c = 0;}
    ans = max(ans, c);
    n = n >> 1;
  }
  return ans;

}