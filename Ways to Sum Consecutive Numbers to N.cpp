int solve(int n)
{
  if (n <= 1) return 1;
  int i = 1, j = 0, k = 1;
  int ans = 0;
  while (n > j)
  {
    if ((n - j) % i == 0)
      ans++;

    i++;
    j += k;
    k++;
  }
  return ans;

}