vector<string> solve(vector<string>& sentence) {
  reverse(sentence.begin(), sentence.end());
  int prev = 0;
  for (int i = 0; i < sentence.size(); i++) {
    if (sentence[i] == " ") {
      reverse(sentence.begin() + prev, sentence.begin() + i);
      prev = i + 1;
    }
  }
  reverse(sentence.begin() + prev, sentence.end());

  return sentence;
}
