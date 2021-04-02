string solve(string sentence, vector<string>& delimiters) {
  unordered_set<char> deli;
  for (auto x : delimiters) {
    char c = x[0];
    deli.insert(c);
  }

  string t = "";
  stack<string> sk;
  for (auto x : sentence) {
    // string ss; ss+=x;
    if (deli.count(x) == 0)
      t += x;
    else {
      if (t.size()) {
        sk.push(t);
        t.clear();
      }
    }
  }

  if (t.size()) sk.push(t);

  char ch = '$';
  string res = "";
  for (auto x : sentence) {
    // string ss; ss+=x;
    if (deli.count(x) == 0) {
      if (ch != 'c') {
        // phle delimeter tha ya ye first hai;
        if (sk.size()) {
          res += sk.top();
          sk.pop();
        }
        ch = 'c';
      }
    } else {
      ch = 'd';
      res += x;
    }
  }

  return res;
}
