/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int dep = 0;
int sum = 0;
void solver(Tree* root, int d)
{

  if (!root) return;

  if (d == dep)
    sum += root->val;
  if (d > dep)
  {
    sum = root->val;
    dep = d;
  }


  solver(root->left, d + 1);
  solver(root->right, d + 1);
}
int solve(Tree* root)
{
  dep = 0;
  sum = 0;
  solver(root, 0);
  return sum;
}