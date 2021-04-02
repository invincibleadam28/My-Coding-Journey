/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

void solver(Tree* root)
{
  if (!root)
    return;


  solver(root->left);
  solver(root->right);

  if (root->left)
  {
    if (!root->left->left && !root->left->right && (root->left->val % 2 == 0))
    {
      root->left = NULL;
    }
  }
  if (root->right)
  {
    if (!root->right->left && !root->right->right && root->right->val % 2 == 0)
    {
      root->right = NULL;
    }
  }
}

Tree* solve(Tree* root)
{
  if (!root) return root;
  solver(root);
  if (!root->left && !root->right && root->val % 2 == 0)
    return NULL;
  return root;
}