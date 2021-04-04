bool solve(int num)
{
  long long int n = num;
  long long int temp = num;
  long long int rev = 0;
  long long int k;
  while (temp > 0)
  {
    k = temp % 10;
    rev = rev * 10 + k;
    temp = temp / 10;
  }
  if (rev == n) return true;
  return false;

}
