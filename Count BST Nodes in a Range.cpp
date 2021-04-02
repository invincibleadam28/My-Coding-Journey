/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */


int solve(Tree* root, int lo, int hi) {

  if (!root) return 0;
  if (root->val >= lo && root->val <= hi)
    return (1 + solve(root->left, lo, hi) + solve(root->right, lo, hi));
  else
    return (solve(root->left, lo, hi) + solve(root->right, lo, hi));

}