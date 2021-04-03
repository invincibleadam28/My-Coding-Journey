/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int solver(Tree* root, int i)
{
  if (!root) return 0;

  if (!root->left && !root->right && i == 1)
    return root->val;

  return (solver(root->left, 0) + solver(root->right, 1));
}
int solve(Tree* root) {
  return solver(root, 0);
}