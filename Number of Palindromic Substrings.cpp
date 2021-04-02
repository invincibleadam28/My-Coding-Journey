int solve(string s)
{
  int n = s.length();
  int ans = 0;
  int l;
  int r;

  for (int i = 0; i < n; i++)
  {
    ans++;

    l = i - 1;
    r = i + 1;

    while (l >= 0 && r < n && s[l] == s[r])
    {
      ans++;
      l--;
      r++;
    }

    l = i;
    r = i + 1;

    while (l >= 0 && r < n && s[l] == s[r])
    {
      ans++;
      l--;
      r++;
    }
  }
  return ans;

}
