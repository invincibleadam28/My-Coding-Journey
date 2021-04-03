bool solver(int i, vector<int>& nums, int dp[])
{
  if (i < 0 || i > nums.size() - 1) return false;
  if (i == nums.size() - 1) return true;
  if (dp[i] == 1) return false;
  if (nums[i] == 0) return false;
  dp[i] = 1;
  return (solver(i - nums[i], nums, dp) || solver(i + nums[i], nums, dp));

}


bool solve(vector<int>& nums, int k)
{
  int n = nums.size();
  if (n == 1) return true;
  //if(nums[k]==0) return false;


  int dp[n + 1] = {0};


  return solver(k, nums, dp);

}
