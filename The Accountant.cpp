string solve(int n) {
  string result;
  while (n > 0) {
    n--;
    int curr = n % 26;
    n = n / 26;
    result.push_back(curr + 'A');
  }

  reverse(result.begin(), result.end());

  return result;
}
