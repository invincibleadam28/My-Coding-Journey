int solve(vector<int>& arr)
{
  int n = arr.size();
  int sum = 0;
  int ans = 0;
  unordered_map<int, int> hmap;

  hmap[0] = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0) arr[i] = -1;
  }

  for (int i = 0; i < n; i++)
  {
    sum += arr[i];

    if (hmap.find(sum) != hmap.end())
    {
      ans = max(ans, i - hmap[sum]);
    }
    else
      hmap[sum] = i;

  }

  return n - ans;

}