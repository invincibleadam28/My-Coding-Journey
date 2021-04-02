int solve(string s)
{
  int n = s.length();
  if (n <= 1) return n;
  int l = 0, r = 0;
  int maxi = 1, c = 0;

  for (int i = 0; i < n; i++)
  {
    l = i - 1;
    r = i + 1;
    c = 1;

    while (l >= 0 && r < n)
    {
      if (s[l] != s[r]) break;
      c += 2;
      l--, r++;
    }
    maxi = max(maxi, c);

    l = i;
    r = i + 1;
    c = 0;
    while (l >= 0 && r < n)
    {
      if (s[l] != s[r]) break;
      c += 2;
      l--, r++;
    }
    maxi = max(maxi, c);

  }

  return maxi;

}
