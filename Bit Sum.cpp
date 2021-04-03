int solve(vector<int>& nums, int k) {

  int n = nums.size();
  int c = 1, sum = 0;

  for (int i = 0; i < n; i++)
    sum = (sum + nums[i]) % (1000000000 + 7);


  while (k > 0)
  {
    for (int i = 0; i < n && k > 0; i++)
    {
      if ((nums[i] & 1) == 0)
      {
        sum = (sum + c) % (1000000000 + 7);
        k--;
      }
      nums[i] = nums[i] >> 1;
    }

    c = (c * 2) % (1000000000 + 7);
  }

  return sum;


}
