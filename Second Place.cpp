/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int deep = 0;
int ans = 0;

void solver(Tree* root, int d)
{
  if (!root) return;
  if (!root->left && !root->right) {
    if (d > deep)
    {
      ans = deep;
      deep = d;
    }
    if (d > ans && d < deep)
      ans = d;
  }
  solver(root->left, d + 1);
  solver(root->right, d + 1);
}

int solve(Tree* root) {
  deep = 0;
  ans = 0;
  solver(root, 0);
  return ans;

}
