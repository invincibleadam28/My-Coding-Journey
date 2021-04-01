int solve(int n)
{
  if (n <= 2) return n;
  int a = 1;
  int b = 2;
  int c = 0;

  for (int i = 3; i <= n; i++)
  {
    c = (a + b) % (1000000000 + 7);
    a = b;
    b = c;
  }

  return c;

}