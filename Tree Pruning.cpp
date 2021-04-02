Tree* solve(Tree* root) {
  if (!root) return NULL;

  root->left = solve(root->left);
  root->right = solve(root->right);

  if (!(root->left or root->right or root->val)) return NULL;
  return root;
}


