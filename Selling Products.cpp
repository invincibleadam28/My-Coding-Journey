int solve(vector<int>& items, int n)
{
  unordered_map<int, int> m;
  map<int, int> f;

  for (int x : items)
  {
    m[x]++;
  }
  for (auto x : m)
  {
    f[x.second]++;
  }
  int c = 0;
  for (auto x : f)
  {
    int a = x.first;
    int b = x.second;

    if (n > 0)
    {
      if ((n - a * b) >= 0)
        n = n - a * b;
      else
      {
        c += (b - (n / a));
        n = 0;
      }
    }
    else
    {
      c += b;
    }


  }

  return c;
}