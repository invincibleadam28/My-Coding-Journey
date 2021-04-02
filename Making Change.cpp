int solve(int n) {
  int no_of_coins = 0;

  no_of_coins += n / 25;
  n %= 25;

  no_of_coins += n / 10;
  n %= 10;

  no_of_coins += n / 5;
  n %= 5;

  no_of_coins += n;

  return no_of_coins;
}
