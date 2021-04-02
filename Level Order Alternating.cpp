/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root)
{
  if (!root) return {};

  queue<Tree*> q{{root}};
  vector<int> ans;
  bool lr = true;
  while (!q.empty())
  {
    int pos = ans.size();
    int n = q.size();

    for (int i = 0; i < n; i++)
    {
      Tree* t = q.front();
      q.pop();
      ans.push_back(t->val);

      if (t->left) q.push(t->left);
      if (t->right) q.push(t->right);
    }

    if (!lr)
      reverse(ans.begin() + pos, ans.end());
    lr = !lr;
  }

  return ans;

}
