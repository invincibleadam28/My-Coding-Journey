int solve(vector<int>& arr, int k)
{
  int n = arr.size();
  if (n == 0) return 0;
  if (n == 1) return (arr[0] - k);
  priority_queue<int> pq;

  for (int i = 0; i < n; i++) pq.push(arr[i]);

  while (k--)
  {
    int x = pq.top();
    pq.pop();
    pq.push(x - 1);
  }

  return pq.top();



}