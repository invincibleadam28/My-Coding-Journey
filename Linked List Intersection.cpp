/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* l1, LLNode* l2)
{
  LLNode* head = new LLNode();
  LLNode* l = head;

  while (l1 && l2)
  {
    if (l1->val < l2->val)
      l1 = l1->next;
    else if (l2->val < l1->val)
      l2 = l2->next;
    else
    {
      l->next = new LLNode();
      l = l->next;
      l->val = l1->val;
      l1 = l1->next;
      l2 = l2->next;
    }
  }

  return head->next;

}
