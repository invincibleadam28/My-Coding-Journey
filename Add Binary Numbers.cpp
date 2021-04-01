char sumit(char a, char b, char c)
{
  int t = 0;
  if (a == '1') t++;
  if (b == '1') t++;
  if (c == '1') t++;
  if (t == 0) return '0';
  if (t == 1) return '1';
  if (t == 2) return '0';
  return '1';
}
char carryit(char a, char b, char c)
{
  int t = 0;
  if (a == '1') t++;
  if (b == '1') t++;
  if (c == '1') t++;
  if (t == 0) return '0';
  if (t == 1) return '0';
  if (t == 2) return '1';
  return '1';
}
string solve(string a, string b)
{
  int n = max(a.length(), b.length()) + 1;
  string ans(n, '0');
  int i = a.length() - 1;
  int j = b.length() - 1;
  int k = n - 1;
  char c = '0';
  while (i >= 0 || j >= 0)
  {
    if (i >= 0 && j >= 0)
    {
      ans[k] = sumit(a[i], b[j], c);
      c = carryit(a[i], b[j], c);
      i--, j--, k--;
      continue;
    }
    if (i >= 0)
    {
      ans[k] = sumit(a[i], '0', c);
      c = carryit(a[i], '0', c);
      k--, i--;
      continue;
    }
    if (j >= 0)
    {
      ans[k] = sumit('0', b[j], c);
      c = carryit('0', b[j], c);
      k--, j--;
      continue;
    }
  }
  ans[k] = c;
  if (ans[0] == '0')
    ans = ans.substr(1, n);

  return ans;


}