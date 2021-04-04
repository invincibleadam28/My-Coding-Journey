string solve(string s)
{
  int n = s.length();
  if (n == 0) return s;
  if (n == 1) return (to_string('1' + s[0]));

  string ans;
  char prevchar = s[0];
  int c = 1;
  string str;
  for (int i = 1; i < n; i++)
  {
    if (prevchar == s[i])
      c++;
    else
    {
      while (c > 0)
      {
        int t = c % 10;
        str = str + (char)('0' + t);
        c = c / 10;
      }
      reverse(str.begin(), str.end());
      ans += str;
      ans += prevchar;
      str = "";
      c = 1;
    }
    prevchar = s[i];
  }
  while (c > 0)
  {
    int t = c % 10;
    str = str + (char)('0' + t);
    c = c / 10;
  }
  reverse(str.begin(), str.end());
  ans += str;
  ans += prevchar;

  return ans;

}
