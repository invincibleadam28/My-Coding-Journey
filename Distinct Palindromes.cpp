const int mod = 1000000007;
long int fact(long int n) {
  if (n == 1 || n == 0) return 1;
  return (fact(n - 1) % mod * n) % mod;
}
long int ModInverse(int x) {
  long int b1 = 0, b2 = 1, d1 = mod, d2 = x;

  while (d2 != 1) {
    int k = d1 / d2;

    int temp = b2;
    b2 = b1 - (k * b2);
    b1 = temp;

    temp = d2;
    d2 = d1 - (k * d2);
    d1 = temp;
  }
  b2 = (b2 + mod) % mod;
  return b2;
}
int solve(string s) {
  int hash[26] = {};
  for (auto ch : s) hash[ch - 'a']++;

  int odd = 0;
  for (auto it : hash) {
    if (it & 1) odd++;
    if (odd > 1) return 0;
  }
  long int no_char = 0, i = 0;
  int duplicates[26] = {};
  for (auto it : hash) {
    no_char += (it / 2);
    duplicates[i++] = (it / 2);
  }
  long int ans = (fact(no_char));
  for (auto it : duplicates) {
    long int value = fact(it);
    ans = (ans % mod * (ModInverse(value) % mod)) % mod;
  }
  return ans;
}
