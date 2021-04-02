vector<string> solve(vector<string>& lst, vector<int>& p)
{
  int n = p.size();

  for (int i = 0; i < n; i++)
  {
    while (p[i] != i)
    {
      swap(lst[i], lst[p[i]]);
      swap(p[i], p[p[i]]);
    }
  }
  return lst;

}