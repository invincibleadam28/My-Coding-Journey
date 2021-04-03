/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solver(Tree* root, int d, int &rd)
{
  if (!root) return true;
  if (!root->left && !root->right)
  {
    if (rd == -1)
      rd = d;
    else
    {
      if (d != rd)
        return false;
    }
    return true;

  }

  return (solver(root->left, d + 1, rd) && solver(root->right, d + 1, rd));
}
bool solve(Tree* root)
{
  int rd = -1;
  return solver(root, 0, rd);

}
