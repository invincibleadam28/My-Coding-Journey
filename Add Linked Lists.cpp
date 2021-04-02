/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* l0, LLNode* l1)
{
  LLNode* head = new LLNode();
  LLNode* temp = head;

  int carry = 0;
  int a = 0, b = 0, sum = 0;
  while (l0 || l1 || carry)
  {
    temp->next = new LLNode();
    temp = temp->next;

    if (!l0) a = 0;
    else a = l0->val, l0 = l0->next;

    if (!l1) b = 0;
    else b = l1->val, l1 = l1->next;

    sum = a + b + carry;
    carry = sum / 10;
    sum = sum % 10;
    temp->val = sum;
  }

  return head->next;

}