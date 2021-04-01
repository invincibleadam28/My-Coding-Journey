/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void deepest(Tree* root, int dep, int* mdp, int* mval)
{
  if (!root) return;
  if (dep >= *mdp) {*mdp = dep; *mval = root->val;}
  deepest(root->right, dep + 1, mdp, mval);
  deepest(root->left, dep + 1, mdp, mval);
}
int solve(Tree* root) {
  int mdp = 0;
  int mval;
  deepest(root, 0, &mdp, &mval);
  return mval;

}