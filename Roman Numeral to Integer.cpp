int solve(string s)
{
  int n = s.length();

  unordered_map<char, int> hmap;
  hmap['M'] = 1000;
  hmap['D'] = 500;
  hmap['C'] = 100;
  hmap['L'] = 50;
  hmap['X'] = 10;
  hmap['V'] = 5;
  hmap['I'] = 1;

  int ans = hmap[s[n - 1]];
  for (int i = n - 2; i >= 0; i--)
  {
    if (hmap[s[i]] < hmap[s[i + 1]])
      ans -= hmap[s[i]];
    else
      ans += hmap[s[i]];
  }
  return ans;


}
