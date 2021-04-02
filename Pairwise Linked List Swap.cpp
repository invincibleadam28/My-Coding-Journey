/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node)
{
  if (!node || !node->next) return node;
  LLNode* x = node;
  LLNode* y = node->next;
  if (!node->next->next)
  {
    int temp = x->val;
    x->val = y->val;
    y->val = temp;
    return node;
  }
  LLNode* z = node->next->next;

  while (1)
  {
    int temp = x->val;
    x->val = y->val;
    y->val = temp;

    if (!z) break;
    x = z;

    if (!z->next) break;
    y = z->next;

    z = y->next;
  }

  return node;

}
