int solve(vector<string>& words)
{
  int n = words.size();
  bitset<26>arr[n];
  int j = 0;
  for (string s : words)
  {
    for (auto x : s)
    {
      arr[j][x - '0'] = 1;
    }
    j++;
  }
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    for (int k = 0; k < n; k++)
    {
      if ((arr[i]&arr[k]).count() == 0)
      {
        if (c < words[i].length() + words[k].length())
          c = words[i].length() + words[k].length();
      }
    }
  }
  return c;

}
