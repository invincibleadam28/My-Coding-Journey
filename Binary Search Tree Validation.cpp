/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool isBST(Tree* root, int lo, int hi) {
  if (root == NULL) return 1;
  if (root->val < lo or root->val > hi) return 0;

  return isBST(root->left, lo, root->val) and isBST(root->right, root->val, hi);
}

bool solve(Tree* root) {
  return isBST(root, INT_MIN, INT_MAX);
}
