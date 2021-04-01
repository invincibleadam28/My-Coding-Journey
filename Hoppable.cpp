bool solve(vector<int>& nums)
{
  int n = nums.size();
  int indx = 0;
  if (n == 1) return true;
  for (int i = 0; i <= indx; i++)
  {
    indx = max(indx, i + nums[i]);
    if (indx >= n - 1) return true;
  }
  return false;


}