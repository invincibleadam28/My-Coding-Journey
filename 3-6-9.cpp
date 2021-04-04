string i2s(int num) {
  if (num % 3 == 0) return "clap";
  string res;
  while (num) {
    int temp{num % 10};
    if (temp == 3 || temp == 6 || temp == 9) return "clap";
    res.push_back(temp + '0');
    num /= 10;
  }
  reverse(res.begin(), res.end());
  return res;
}

vector<string> res;
vector<string> solve(int n) {
  static bool start{true};
  if (start) {
    for (int i{1}; i <= 999; ++i) {
      res.push_back(i2s(i));
    }
    start = false;
  }
  return vector<string>(&res[0], &res[n]);
}
