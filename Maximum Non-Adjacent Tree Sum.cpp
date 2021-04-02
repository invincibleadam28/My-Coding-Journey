/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
unordered_map<Tree*, int>dp;

int solve(Tree* root)
{
  if (!root) return 0;
  if (dp[root]) return dp[root];
  int take = root->val;
  int leave;

  if (root->left) take += solve(root->left->left) + solve(root->left->right);
  if (root->right) take += solve(root->right->left) + solve(root->right->right);

  leave = solve(root->left) + solve(root->right);

  return (dp[root] = max(take, leave));


}
