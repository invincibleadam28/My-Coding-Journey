int searchit(vector<int> &arr, int x, int l, int r)
{
  int m;
  while (l <= r) {
    m = l + (r - l) / 2;

    if (arr[m] == x)
      return m;

    if (arr[m] < x)
      l = m + 1;

    else
      r = m - 1;
  }

  return m;

}


bool solve(int target)
{
  vector<int> v;
  long long int x = 1;
  v.push_back(x);
  for (int i = 2;; i++)
  {
    x = x * i;
    if (x > target) break;
    v.push_back(x);
  }
  int n = v.size();
  set<int> st;
  int ind;
  while (target != 0)
  {
    ind = searchit(v, target, 0, n - 1);
    if (v[ind] > target && (ind - 1) > 0) ind = ind - 1;
    if (st.find(ind) != st.end()) return false;
    st.insert(ind);
    target = target - v[ind];
    if (target < 0) return false;
  }
  return true;


}

