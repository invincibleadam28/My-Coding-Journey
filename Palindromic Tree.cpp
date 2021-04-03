/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root)
{
  Tree* root1 = root;
  Tree* root2 = root;

  stack<Tree*> s1, s2;

  while (root1 || root2 || !s1.empty() || !s2.empty())
  {
    while (root1) {s1.push(root1); root1 = root1->left;}
    while (root2) {s2.push(root2); root2 = root2->right;}

    root1 = s1.top();
    s1.pop();
    root2 = s2.top();
    s2.pop();

    if (root1 == root2)
      return true;
    if (root1->val != root2->val) return false;

    root1 = root1->right;
    root2 = root2->left;
  }

  return true;

}
