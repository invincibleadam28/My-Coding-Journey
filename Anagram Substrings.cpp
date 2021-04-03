int solve(string s0, string s1)
{
  int n = s1.length();
  int hash[26] = {0};
  for (int i = 0; i < s0.length(); i++)
  {
    hash[s0[i] - 'a'] += 1;
  }
  int ans = 0;
  int i = 0, j = 0;
  while (i < n && j < n)
  {
    int x = s1[j] - 'a';
    if (hash[x] > 0)
    {
      hash[x] -= 1;
      if (j - i + 1 == s0.length())
      {
        ans++;
        hash[s1[i] - 'a'] += 1;
        i++;
      }
      j++;
    }
    else
    {
      while (i < j)
      {
        hash[s1[i] - 'a'] += 1;
        i++;
      }
      if (hash[s1[i] - 'a'] > 0) continue;
      j++, i++;
    }
  }
  return ans;

}
