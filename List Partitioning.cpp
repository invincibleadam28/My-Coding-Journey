void swap(vector<string>& A, int i, int j) {
  string t = A[i];
  A[i] = A[j];
  A[j] = t;
}

vector<string> solve(vector<string>& A) {
  int j = 0;
  for (int i = 0; i < A.size(); i++) {
    if (A[i] == "red") {
      swap(A, j, i);
      j++;
    }
  }

  for (int i = 0; i < A.size(); i++) {
    if (A[i] == "green") {
      swap(A, j, i);
      j++;
    }
  }

  return A;
}
