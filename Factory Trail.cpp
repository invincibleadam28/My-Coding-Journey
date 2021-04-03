int solve(int n) {
  int ans = 0;
  int k = log(n) / log(5);
  int z = 5;
  for (int i = 0; i < k; i++)
  {
    ans += n / z;
    z *= 5;
  }
  return ans;


}