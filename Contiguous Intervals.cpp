vector<vector<int>> solve(vector<int>& nums)
{
  int n = nums.size();
  vector<vector<int>> ans;
  sort(nums.begin(), nums.end());

  int i = 0, j = 0;

  while (i < n)
  {
    j = i + 1;
    vector<int> x;
    x.push_back(nums[i]);
    while ((nums[j] == nums[j - 1] + 1) && j < n)
    {
      j++;
    }
    x.push_back(nums[j - 1]);
    i = j;
    ans.push_back(x);
  }
  return ans;

}