/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int res;

int s(Tree* root) {
  if (!root) return 0;
  int re = 0;
  int l = s(root->left);
  int r = s(root->right);

  if (root->val % 2 == 0) {
    res = max(res, l + r + 1);
    return max(l, r) + 1;
  }
  res = max(res, l);
  res = max(res, r);
  return 0;
}

int solve(Tree* root) {
  res = 0;
  s(root);
  return res;
}