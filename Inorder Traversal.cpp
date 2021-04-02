/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void solver(Tree* root, vector<int> &ans)
{
  if (!root) return;

  solver(root->left, ans);
  ans.push_back(root->val);
  solver(root->right, ans);
}
vector<int> solve(Tree* root)
{
  vector<int> ans;
  solver(root, ans);

  return (ans);
}