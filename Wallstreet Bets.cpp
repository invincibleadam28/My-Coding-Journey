vector<int> solve(vector<int>& prices)
{
  int n = prices.size();
  vector<int> ans(n, 0);

  stack<int> s;
  s.push(n - 1);

  for (int i = n - 2; i >= 0; i--)
  {
    while (!s.empty() && prices[s.top()] <= prices[i])
      s.pop();

    if (!s.empty()) ans[i] = s.top() - i;

    s.push(i);
  }

  return ans;
}