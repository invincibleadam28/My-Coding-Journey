/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void solver(Tree* root, int i, vector<int> &ans)
{
  if (!root) return;

  if (i >= ans.size())
  {
    ans.push_back(root->val);
  }
  else
    ans[i] += root->val;

  solver(root->left, i + 1, ans);
  solver(root->right, i, ans);
}



vector<int> solve(Tree* root)
{
  vector<int> ans;
  solver(root, 0, ans);

  return ans;

}