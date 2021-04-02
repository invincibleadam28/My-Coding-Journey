/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* node0, Tree* node1) {
  if (!node0)
    return node1;
  else if (!node1)
    return node0;
  else {
    node0->val += node1->val;
    auto left = solve(node0->left, node1->left);
    auto right = solve(node0->right, node1->right);
    node0->left = left;
    node0->right = right;
    return node0;
  }
}
