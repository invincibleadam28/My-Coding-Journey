vector<int> solve(vector<int>& nums) {
  vector<int> v;
  stack<int> st;
  int i = 0;
  while (i < nums.size()) {
    if (st.empty()) {
      st.push(nums[i]);
      i++;
      continue;
    }
    int x = st.top();
    if (x > 0 and nums[i] < 0) {
      if (abs(x) < abs(nums[i]))
        st.pop();
      else if (abs(x) == abs(nums[i])) {
        st.pop();
        i++;
      } else {
        i++;
      }
    } else {
      st.push(nums[i]);
      i++;
    }
  }
  while (!st.empty()) {
    v.push_back(st.top());
    st.pop();
  }
  reverse(v.begin(), v.end());
  return v;
}