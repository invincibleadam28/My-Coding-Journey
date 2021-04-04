bool solve(vector<int>& arr) {
	int n = arr.size();
	if (n == 1) return true;
	if (arr[1] > arr[0])
	{
		for (int i = 1; i < n - 1; i++)
		{
			if (arr[i + 1] <= arr[i]) return false;
		}
		return true;
	}
	if (arr[1] < arr[0])
	{
		for (int i = 1; i < n - 1; i++)
		{
			if (arr[i + 1] >= arr[i]) return false;
		}
		return true;
	}
	return false;

}