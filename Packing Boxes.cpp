vector<vector<int>> solve(vector<int> &nums) {
  vector<vector<int>> ans;
  if (!nums.size()) return ans;

  ans.push_back({nums[0]});
  int k = 0;
  for (int i = 1; i < nums.size(); i++) {
    if (ans[k].back() != nums[i]) {
      k++;
      ans.push_back({nums[i]});

    } else
      ans[k].push_back(nums[i]);
  }
  return ans;
}