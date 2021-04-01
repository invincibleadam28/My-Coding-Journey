bool solve(vector<int>& nums)
{
  set<int> myset;
  unordered_map<int, int> hmap;

  for (int i = 0; i < nums.size(); i++)
  {
    hmap[nums[i]]++;
  }
  for (auto x : hmap)
  {
    if (myset.find(x.second) == myset.end())
      myset.insert(x.second);
    else
      return false;
  }
  return true;
}