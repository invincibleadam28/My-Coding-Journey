vector<vector<int>> solve(vector<vector<int>>& intervals, vector<string>& types) {
  int OPEN = 1, END = 0;
  vector<vector<int>> arr;
  for (auto& i : intervals) {
    arr.push_back({i[0], 1});
    arr.push_back({i[1], 0});
  }

  sort(arr.begin(), arr.end());
  vector<vector<int>> sol;
  int n = arr.size();
  int active = 0, prev;
  for (auto i : arr) {
    if (prev != i[0] && active > 0) sol.push_back({prev, i[0], active});
    prev = i[0];

    if (i[1] == OPEN)
      active++;
    else
      active--;
  }
  return sol;
}