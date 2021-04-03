/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

bool solver(Tree* root1, Tree* root2)
{
  if (!root1 && !root2) return true;
  if (!root1 || !root2) return false;

  return (root1->val == root2->val && solver(root1->left, root2->left) && solver(root1->right, root2->right));
}
bool solve(Tree* root, Tree* target)
{
  if (!root) return false;

  bool ans = false;

  if (root->val == target->val)
    ans = solver(root, target);

  bool left = solve(root->left, target);
  bool right = solve(root->right, target);

  return (ans | left | right);
}
