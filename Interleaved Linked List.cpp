**
* class LLNode {
*     public:
  *         int val;
  *         LLNode *next;
  *
};
* /
LLNode* solve(LLNode* l1, LLNode* l2)
{
  LLNode* l = new LLNode();
  LLNode*head = l;

  while (l1 && l2)
  {
    LLNode* temp = new LLNode();
    temp->val = l1->val;
    l->next = temp;
    l = l->next;
    l1 = l1->next;

    temp = new LLNode();
    temp->val = l2->val;
    l->next = temp;
    l = l->next;
    l2 = l2->next;
  }
  while (l1)
  {
    LLNode* temp = new LLNode();
    temp->val = l1->val;
    l->next = temp;
    l = l->next;
    l1 = l1->next;
  }
  while (l2)
  {
    LLNode* temp = new LLNode();
    temp->val = l2->val;
    l->next = temp;
    l = l->next;
    l2 = l2->next;
  }

  return head->next;
}