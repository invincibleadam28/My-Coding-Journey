/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* root) {
  if (!root) return NULL;

  Tree* new_left = solve(root->right);
  Tree* new_right = solve(root->left);

  root->left = new_left;
  root->right = new_right;

  return root;
}
