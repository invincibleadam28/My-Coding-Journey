bool solver(vector<int>& nums, int k, int mid)
{
  int i = 0;
  int s = 0;
  int c = 0;

  while (i < nums.size())
  {
    s += nums[i];
    if (s > mid)
    {
      c++;
      s = nums[i];
    }
    i++;
  }
  if (s <= mid)
    c++;
  return (c <= k);
}

int solve(vector<int>& nums, int k)
{
  int n = nums.size();
  int start = INT_MIN;
  int end = 0;

  for (int i = 0; i < n; i++)
  {
    start = max(start, nums[i]);
    end += nums[i];
  }
  int mid;

  while (start < end)
  {
    cout << start << " " << end << endl;
    mid = (start + end) / 2;
    if (solver(nums, k, mid))
    {
      end = mid;
    }
    else
    {
      start = mid + 1;
    }
  }

  return start;
}

