bool solve(string s, string t)
{
  int n1 = s.length();
  int n2 = t.length();
  if (n1 != n2) return false;

  int arr[26] = {0};
  int arr2[26] = {0};

  for (int i = 0; i < n1; i++)
  {
    arr[s[i] - 'a'] += 1;
  }

  for (int i = 0; i < n2; i++)
  {
    arr[t[i] - 'a'] -= 1;
  }
  int sum = 0, flag1 = 0, flag2 = 0;
  for (int i = 0; i < 26; i++)
  {
    sum += arr[i];
    if (sum < 0) flag1 = 1;
    if (sum > 0) flag2 = 1;

    if (flag1 == 1 && flag2 == 1) return false;
  }


  return true;

}