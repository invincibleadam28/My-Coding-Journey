/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree *root) {

  bool no_kids = false;
  queue<Tree *> q;
  if (root) q.push(root);

  while (not q.empty()) {
    Tree *cur = q.front();
    q.pop();

    if (cur->left)
      if (no_kids)
        return false;
      else
        q.push(cur->left);
    else
      no_kids = true;

    if (cur->right)
      if (no_kids)
        return false;
      else
        q.push(cur->right);
    else
      no_kids = true;
  }

  return true;
}
