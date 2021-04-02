/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root, int val) {
  if (!root) return false;
  if (root->val == val) return true;
  if (val < root->val) return solve(root->left, val);
  return solve(root->right, val);
}
