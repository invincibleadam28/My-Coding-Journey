int solve(vector<int>& l0, vector<int>& l1) {
  if (l0.size() == 0 || l1.size() == 0) {
    return 0;
  }
  int sum1 = l0[0];
  int sum2 = l1[0];
  int c = 0;
  int i = 0;
  int j = 0;
  while (i < l0.size() && j < l1.size()) {
    // sum1+=l0[i];
    // sum2+=l1[j];
    if (sum1 == sum2) {
      c++;
      sum1 = 0;
      sum2 = 0;
      if (i < l0.size() - 1) {
        sum1 = l0[i + 1];
      }
      if (j < l1.size() - 1) {
        sum2 = l1[j + 1];
      }

      i++;
      j++;
      continue;
    }
    if (sum1 < sum2) {
      if (i < l0.size() - 1) {
        sum1 += l0[i + 1];
        i++;
      }
    } else {
      if (j < l1.size() - 1) {
        sum2 += l1[j + 1];
        j++;
      }
    }
  }
  // cout<<i<<" "<<j<<endl;
  if (i == l0.size() && j == l1.size()) {
    return c;
  } else {
    return -1;
  }
}

