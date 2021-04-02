/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int mdep;
int msum;

void solver(Tree* root, int currsum, int dep)
{
  if (!root)
  {


    if (dep >= mdep)
    {
      if (dep > mdep)
      {
        mdep = dep;
        msum = currsum;
      }
      else
      {
        msum = max(msum, currsum);
      }

    }
    return;
  }

  solver(root->left, currsum + root->val, dep + 1);

  solver(root->right, currsum + root->val, dep + 1);

}

int solve(Tree* root) {
  mdep = 0;
  msum = 0;

  solver(root, 0, 0);
  return msum;
}
