/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node, int k)
{
  LLNode* t2 = node;
  LLNode* t1;
  int c = k;
  while (c--)
    t2 = t2->next;
  if (t2 == NULL)
    return node;

  t1 = node;
  while (t2->next)
  {
    t1 = t1->next;
    t2 = t2->next;
  }
  t2->next = node;
  node = t1->next;
  t1->next = NULL;

  return node;
}