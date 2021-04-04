bool solve(string s) {
  int n = s.length();

  int arr[26] = {0};

  for (int i = 0; i < n; i++)
  {
    int pos = s[i] - 97;
    arr[pos] += 1;

    if (arr[pos] > 1)
      return false;
  }


  return true;
}