/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

void solver(Tree* root, vector<int> &v)
{
  if (!root) return;
  if (!root->left && !root->right)
    v.push_back(root->val);

  solver(root->left, v);
  solver(root->right, v);
}
bool solve(Tree* root0, Tree* root1)
{
  vector<int> v1, v0;
  solver(root0, v0);
  solver(root1, v1);

  if (v1.size() != v0.size()) return false;
  int i = 0;
  while (i < v1.size())
  {
    if (v0[i] != v1[i])
      return false;
    i++;
  }

  return true;

}
