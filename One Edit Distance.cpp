bool iseq(string s1, int i, string s2, int j)
{
  while (i < s1.size() && j < s2.size() && s1[i] == s2[j])
  {
    i++, j++;
  }

  return (i == s1.size() && j == s2.size());
}
bool solve(string s1, string s2)
{
  int n1 = s1.size();
  int n2 = s2.size();

  if (n1 > n2 + 1 || n2 > n1 + 1)
    return false;

  for (int i = 0; i < min(n1, n2); i++)
  {
    if (s1[i] != s2[i])
    {
      return (iseq(s1, i + 1, s2, i) || iseq(s1, i, s2, i + 1) || iseq(s1, i + 1, s2, i + 1));
    }
  }
  return true;

}