int solve(string a, string b) {
	int arr[26] = {0};
	int brr[26] = {0};

	int ans = 0;

	for (int i = 0; i < a.length(); i++) arr[(int)a[i] - 97] += 1;

	for (int i = 0; i < b.length(); i++) brr[(int)b[i] - 97] += 1;

	for (int i = 0; i < 26; i++) ans += min(arr[i], brr[i]);

	return ans;
}
