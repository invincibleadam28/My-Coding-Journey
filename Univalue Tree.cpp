/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solver(Tree* root, int n)
{
  if (!root) return true;

  return (root->val == n && solver(root->left, n) && solver(root->right, n));
}
bool solve(Tree* root)
{
  if (!root) return true;
  return solver(root, root->val);

}