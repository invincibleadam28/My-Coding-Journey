string solve(string s)
{
  stack <char> mystack;
  int n = s.length();
  if (n <= 1) return s;
  int i = 1;
  mystack.push(s[0]);

  while (i < n)
  {
    if (mystack.empty())
    {
      mystack.push(s[i]);
      i++;
      continue;
    }
    if (s[i] == mystack.top())
    {
      while (s[i] == mystack.top() && i < n) {i++;}
      mystack.pop();
    }
    else
    {
      mystack.push(s[i]);
      i++;
    }
  }
  string ans;
  while (!mystack.empty())
  {
    ans += mystack.top();
    mystack.pop();
  }
  reverse(ans.begin(), ans.end());
  return ans;


}