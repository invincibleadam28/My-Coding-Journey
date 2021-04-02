/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int height(Tree* root)
{
  if (!root) return 0;

  return (1 + max(height(root->left), height(root->right)));
}
void solver(Tree* root, int d, vector<int> &ans, int arr[])
{
  if (!root) return;
  if (arr[d] == 0)
  {
    ans.push_back(root->val);
    arr[d] = 1;
  }
  solver(root->left, d + 1, ans, arr);

  solver(root->right, d + 1, ans, arr);
}
vector<int> solve(Tree* root)
{
  vector<int> ans;
  int arr[height(root)] = {0};
  solver(root, 0, ans, arr);
  return ans;
}
