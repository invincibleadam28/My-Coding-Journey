void solver(vector<string> &phone, vector<string> &ans, string &s, string &res, int i)
{
  if (i >= s.length())
  {
    ans.push_back(res);
    return;
  }
  int x = s[i] - '0';
  for (int k = 0; k < phone[x].length(); k++)
  {
    res[i] = phone[x][k];
    solver(phone, ans, s, res, i + 1);
  }

}
vector<string> solve(string digits)
{
  vector<string> phone = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  vector<string> ans;
  string res(digits.length(), ' ');
  solver(phone, ans, digits, res, 0);
  return ans;

}
