int solve(vector<int>& nums, int k)
{
  int n = nums.size();

  if (k > n) return -1;
  if (k <= 1)
    return 0;

  sort(nums.begin(), nums.end());
  int i = 0, j = k - 1;
  int mini = 1e9;
  while (j < n)
  {
    int x = nums[j] - nums[i];
    if (x < mini)
    {
      mini = x;
    }
    i++, j++;
  }
  return mini;



}
