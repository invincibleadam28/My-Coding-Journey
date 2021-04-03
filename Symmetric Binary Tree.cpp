/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool symm(Tree* r1, Tree* r2)
{
  if (!r1 && !r2) return true;

  if (r1 && r2 && r1->val == r2->val) return (symm(r1->left, r2->right) && symm(r1->right, r2->left));

  return false;
}
bool solve(Tree* root) {
  return symm(root, root);

}