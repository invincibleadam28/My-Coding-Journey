int height(Tree* root) {
  if (root == NULL) return 0;
  return max(height(root->left), height(root->right)) + 1;
}
bool solve(Tree* root) {
  if (root == NULL) return true;

  return solve(root->left) && solve(root->right) &&
         abs(height(root->left) - height(root->right)) <= 1;
}

