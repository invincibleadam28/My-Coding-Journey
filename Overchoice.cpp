void backtrack(int i, string s1, string& s2, vector<string>& result) {
  if (i == s1.size()) {
    result.push_back(s2);
    return;
  }
  vector<string> choices;
  int n = s2.size();
  if (s1[i] == '[') {
    while (s1[i] != ']') {
      string choice = "";
      // Because it currently points to [ or | or ]
      i++;
      while (s1[i] != '|' && s1[i] != ']') {
        choice += s1[i++];
      }
      choices.push_back(choice);
    }
    for (string choi : choices) {
      s2 += choi;
      backtrack(i + 1, s1, s2, result);
      s2.erase(s2.begin() + n, s2.end());
    }
  } else {
    s2 += s1[i];
    backtrack(i + 1, s1, s2, result);
    s2.erase(s2.begin() + n, s2.end());
  }
}

vector<string> solve(string s) {
  vector<string> ans;
  string s2 = "";
  backtrack(0, s, s2, ans);
  return ans;
}