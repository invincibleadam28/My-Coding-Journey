int solve(vector<string>& words) {
  unordered_map<string, int> anagrams;
  int largestGrouping = 0;

  for (auto word : words) {
    sort(word.begin(), word.end());
    largestGrouping = max(++anagrams[word], largestGrouping);
  }
  return largestGrouping;
}
