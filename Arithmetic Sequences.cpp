int solve(vector<int>& nums) {

  int n = nums.size();
  int prev, curr;
  int ans = 0, len = 2;

  prev = nums[1] - nums[0];

  for (int i = 2; i < n; i++)
  {
    curr = nums[i] - nums[i - 1];
    if (curr == prev)
    {
      if (len >= 2)
        len++;
      else
        len = 2;
    }
    else
    {
      for (int x = 3; len - x >= 0; x++)
      {
        ans += (len - x) + 1;
      }

      len = 2;
    }
    prev = curr;
  }
  for (int x = 3; len - x >= 0; x++)
  {
    ans += (len - x) + 1;
  }


  return ans;

}
