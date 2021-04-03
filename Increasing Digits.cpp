int solve(int n) {
  if (n > 9) return 0;
  int ans = 1;

  for (int i = 1; i <= 9; i++) ans *= i;
  for (int i = 1; i <= 9 - n; i++) ans /= i;
  for (int i = 1; i <= n; i++) ans /= i;

  return ans;
}
