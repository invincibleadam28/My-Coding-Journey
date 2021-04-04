bool solve(vector<int>& nums, int k)
{
	set<int>st;
	for (auto x : nums)
	{
		if (st.find(k - x) != st.end()) return true;
		st.insert(x);

	}
	return false;

}