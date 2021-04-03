long long dfs(int n, int step, int lastDigit, vector<unordered_map<int, long long>>& memo) {
  if (step == n) return 1;

  auto it = memo[lastDigit].find(step);
  if (it != memo[lastDigit].end()) return it->second;

  long long cnt = 0;
  if (lastDigit > 0) cnt += dfs(n, step + 1, lastDigit - 1, memo);

  if (lastDigit < 9) cnt += dfs(n, step + 1, lastDigit + 1, memo);

  memo[lastDigit].insert({step, cnt});

  return cnt % 1000000007;
}

int solve(int n) {
  long long cnt = 0;
  if (1 == n) return 10;
  vector<unordered_map<int, long long>> memo(10, unordered_map<int, long long>());
  for (int num = 1; num <= 9; ++num) {
    cnt += dfs(n, 1, num, memo);
  }
  return (int)(cnt % 1000000007);
}
