/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int numnode(Tree* root)
{
  if (!root)
    return 0;

  return (1 + numnode(root->left) + numnode(root->right));
}
int numleaf(Tree* root)
{
  if (!root)
    return 0;
  if (!root->left && !root->right) return 1;

  return (numleaf(root->left) + numleaf(root->right));
}
vector<int> solve(Tree* root)
{
  int l = numleaf(root);
  int inode = numnode(root) - l;
  return {l, inode};

}
