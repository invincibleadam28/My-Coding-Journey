/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root1, Tree* root2)
{
  if (!root1 && !root2) return true;
  if (!root1 || !root2) return false;

  return (root1->val == root2->val && ((solve(root1->left, root2->left) && solve(root1->right, root2->right)) || (solve(root1->left, root2->right) && solve(root1->right, root2->left))));

}