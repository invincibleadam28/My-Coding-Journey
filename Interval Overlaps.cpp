vector<vector<int>> solve(vector<vector<int>>& l0, vector<vector<int>>& l1) {

  int n = l0.size();
  int m = l1.size();
  vector<int> v(2);
  vector<vector<int>> ans;
  int i = 0, j = 0;

  while (i < n && j < m)
  {
    if (l0[i][0] > l1[j][1])
      j++;
    else if (l1[j][0] > l0[i][1])
      i++;
    else
    {
      v[0] = max(l0[i][0], l1[j][0]);
      v[1] = min(l0[i][1], l1[j][1]);
      ans.push_back(v);

      if (l1[j][1] > l0[i][1])
        i++;
      else
        j++;
    }
  }

  return ans;

}
