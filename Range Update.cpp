vector<int> solve(vector<int>& nums, vector<vector<int>>& operations) {
  int n = nums.size();
  int increases[n + 1] = {0};

  for (vector<int>& op : operations) {
    int L = op[0];
    int R = op[1];
    int X = op[2];

    increases[L] += X;
    increases[R + 1] -= X;
  }

  int s = 0;
  vector<int> res;

  for (int i = 0; i < n; i++) {
    s += increases[i];
    res.push_back(s + nums[i]);
  }

  return res;
}