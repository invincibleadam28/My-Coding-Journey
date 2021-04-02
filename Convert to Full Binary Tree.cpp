/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* root)
{
  if (!root) return root;
  root->left = solve(root->left);
  root->right = solve(root->right);

  if (root->left && root->right) return root;
  if (!root->left && !root->right) return root;

  if (!root->left) return root->right;
  return root->left;

}