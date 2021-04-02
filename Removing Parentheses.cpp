int solve(string s)
{
  int n = s.length();
  if (n <= 1) return 1;
  stack <char> mystack;
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '(') mystack.push(s[i]);
    if (s[i] == ')')
    {
      if (mystack.empty()) c++;
      else mystack.pop();
    }
  }
  while (!mystack.empty())
  {
    mystack.pop();
    c++;
  }
  return c;

}