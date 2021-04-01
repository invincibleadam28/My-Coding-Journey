bool solve(string s)
{
	int c = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(') { c++; continue;}
		c--;
		if (c < 0) return false;
	}
	if (c == 0) return true;
	return false;
}