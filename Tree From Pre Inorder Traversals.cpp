Tree* solve(vector<int>& preorder, vector<int>& inorder, int pl, int pr, int il, int ir) {
  if (pl > pr) return nullptr;
  Tree* root = new Tree(inorder[preorder[pl]]);
  int left = preorder[pl] - il;
  int right = ir - preorder[pl];
  if (left) root->left = solve(preorder, inorder, pl + 1, pl + left, il, preorder[pl] - 1);
  if (right) root->right = solve(preorder, inorder, pl + left + 1, pr, preorder[pl] + 1, ir);
  return root;
}

Tree* solve(vector<int>& preorder, vector<int>& inorder) {
  int n = preorder.size();
  unordered_map<int, int> mp;
  for (int i = 0; i < n; ++i) mp[inorder[i]] = i;
  vector<int> mapped_pre(n);
  for (int i = 0; i < n; ++i) mapped_pre[i] = mp[preorder[i]];
  return solve(mapped_pre, inorder, 0, n - 1, 0, n - 1);
}
