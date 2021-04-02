/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root, int k) {  // Morris traversal: Time O(N), Space: O(1)
  Tree* curr = root;

  while (curr) {
    if (curr->left) {
      Tree* predecessor = curr->left;
      while (predecessor->right && predecessor->right != curr)
        predecessor = predecessor->right;

      if (predecessor->right) {
        if (k == 0) return curr->val;

        k--;
        predecessor->right = nullptr;
        curr = curr->right;
      } else {
        predecessor->right = curr;
        curr = curr->left;
      }
    } else {
      if (k == 0) return curr->val;

      k--;
      curr = curr->right;
    }
  }

  return INT_MIN;
}
