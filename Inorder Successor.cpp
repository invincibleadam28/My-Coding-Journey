int solve(Tree* root, int t) {
  int ans = INT_MAX;
  while (root != NULL) {
    if (root->val > t) {
      ans = min(ans, root->val);
      root = root->left;
    } else {
      root = root->right;
    }
  }
  return ans;
}