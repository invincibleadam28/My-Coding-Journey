int solve(vector<int>& p)
{
  int n = p.size();
  int c = 2;
  int ans = 2;
  for (int i = 0; i < n - 1; i++)
  {
    p[i] = abs(p[i + 1] - p[i]);
  }
  for (int i = 0; i < n - 2; i++)
  {
    if (p[i] == p[i + 1])
      c++;
    else
      c = 2;
    //cout<<c<<" ";
    ans = max(c, ans);
  }

  return ans;

}