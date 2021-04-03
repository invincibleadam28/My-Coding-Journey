/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(Tree* root)
{
  queue<Tree*> q;
  LLNode* head = new LLNode();
  head->val = root->val;
  LLNode* t = head;
  Tree* flag = new Tree();
  q.push(root);
  Tree* node;

  while (!q.empty())
  {
    if (q.front() == flag)
    {
      q.pop();
      if (q.empty()) break;
      q.push(flag);
    }
    else
    {
      node = q.front();
      LLNode* temp = new LLNode();
      temp->val = node->val;
      t->next = temp;
      t = t->next;
      if (node->left)
        q.push(node->left);
      if (node->right)
        q.push(node->right);
      q.pop();
    }
  }
  t->next = NULL;
  head = head->next;
  return head;
}
