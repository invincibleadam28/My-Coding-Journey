/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solver(Tree* root)
{
  if (!root) return 0;

  int l = solver(root->left);
  int r = solver(root->right);

  root->val += l + r;
  return (root->val);
}
Tree* solve(Tree* root)
{
  solver(root);
  return root;


}