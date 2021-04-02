vector<vector<int>> solve(vector<vector<int>>& graph)
{
  int n = graph.size();
  if (n <= 0) return graph;
  vector<vector<int>> arr(n);
  int i = 0, j = 0;
  for (vector<int> &z : graph)
  {
    for (int x : z)
    {
      arr[x].push_back(i);
    }
    i++;
  }
  return arr;


}