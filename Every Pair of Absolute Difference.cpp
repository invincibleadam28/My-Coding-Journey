int solve(vector<int>& nums)
{
  int n = nums.size();
  int ans = 0;
  int k = n - 1;
  for (int i = n - 1; i >= 0; i--)
  {
    if (k > 0)
    {
      ans = (ans + 2 * nums[i] * k) % (1000000007);
      ans -= 2 * nums[n - 1 - i] * k;
      k -= 2;
    }
    else
      break;

  }
  return ans;

}
