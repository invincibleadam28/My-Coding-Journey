vector<int> solve(int n)
{
  if (n <= 1) return {};
  if (n == 2) return {2};
  int arr[n + 1] = {0};
  vector<int> ans;
  for (int i = 2; i < n + 1; i++)
  {
    if (arr[i] == 1) continue;
    ans.push_back(i);
    for (int j = 1; j * i < n + 1; j++)
    {
      arr[i * j] = 1;
    }
  }
  return ans;

}