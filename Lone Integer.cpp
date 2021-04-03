int solve(vector<int>& nums)
{
  int n = nums.size();
  int bits[32] = {0};

  for (int i = 0; i < n; i++)
  {
    int c = 0;
    int x = nums[i];
    while (x > 0)
    {
      if ((x & 1) == 1) bits[c] += 1;
      x = x >> 1;
      c++;
    }
  }
  for (int i = 31; i >= 0; i--)
  {cout << bits[i];}
  int ans = 1;
  for (int i = 31; i >= 0; i--)
  {
    ans = (ans << 1) + (bits[i] % 3);
  }
  return ans;


}