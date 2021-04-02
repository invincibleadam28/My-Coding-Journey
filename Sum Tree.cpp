/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root) {
  if (!root || (!root->left && !root->right)) return true;

  int l = 0, r = 0;
  if (root->left) l = root->left->val;
  if (root->right) r = root->right->val;

  return ((root->val == l + r) & solve(root->left) & solve(root->right));
}