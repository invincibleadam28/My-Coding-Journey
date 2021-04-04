bool solve(vector<int>& arr)
{
	int n = arr.size();
	if (n <= 1) return 0;
	if (n == 2) return (abs(arr[1] - arr[0]));
	int maxi = INT_MIN;
	int prevmax = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= maxi)
		{
			prevmax = maxi;
			maxi = arr[i];
		}
		else if (arr[i] > prevmax) prevmax = arr[i];


	}
	return (maxi > 2 * prevmax);
}