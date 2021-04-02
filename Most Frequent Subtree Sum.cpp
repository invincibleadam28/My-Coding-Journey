/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solver(Tree* root, unordered_map<int, int> &hmap)
{
  if (!root) return 0;
  if (!root->left && !root->right)
  {
    hmap[root->val]++;
    return root->val;
  }
  int l = solver(root->left, hmap);
  int r = solver(root->right, hmap);
  hmap[root->val + l + r]++;
  return (root->val + l + r);
}
int solve(Tree* root)
{
  unordered_map<int, int> hmap;
  solver(root, hmap);
  int maxi = INT_MIN;
  int ans = 0;
  for (auto x : hmap)
  {
    if (x.second > maxi)
    {
      maxi = x.second;
      ans = x.first;
    }
  }
  return ans;

}