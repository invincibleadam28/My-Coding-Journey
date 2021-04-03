int solve(vector<string>& words, string letters) {
  vector<int> hash(26);  // Storing frequency of letters
  int extra = 0, ans = 0;
  for (int i = 0; i < letters.length(); i++) {
    if (letters[i] == '*') {
      extra++;
    } else {
      hash[letters[i] - 'a']++;
    }
  }
  for (int i = 0; i < words.size(); i++) {
    vector<int> current_hash(26);  // Storing frequency of current word
    for (int j = 0; j < words[i].length(); j++) {
      current_hash[words[i][j] - 'a']++;
    }
    int common_elements = 0;
    for (int freq = 0; freq < 26; freq++) {
      common_elements += min(current_hash[freq], hash[freq]);
    }
    if (words[i].length() <= extra + common_elements) {
      ans = max(ans, (int)words[i].length());
    }
  }
  return ans;
}
