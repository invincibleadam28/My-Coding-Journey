int solve(vector<int>& nums)
{
  int n = nums.size();
  sort(nums.begin(), nums.end());

  int i = 0, j = n - 1, k;
  int ans = 0;
  for (int j = n - 1; j >= 0; j--)
  {
    i = 0;
    k = j - 1;
    while (k > i)
    {
      if (nums[k] + nums[i] > nums[j])
      {
        ans += (k - i);
        k--;
      }
      else
        i++;
    }
  }

  return ans;

}
