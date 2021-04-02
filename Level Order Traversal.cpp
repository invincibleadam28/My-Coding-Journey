/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
  vector<int> levels;
  queue<Tree*> q;
  if (root) q.push(root);
  while (not q.empty()) {
    int n = q.size();
    while (n--) {
      levels.push_back(q.front()->val);
      if (q.front()->left) q.push(q.front()->left);
      if (q.front()->right) q.push(q.front()->right);
      q.pop();
    }
  }
  return levels;
}
