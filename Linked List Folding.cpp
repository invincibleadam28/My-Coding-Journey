/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* revlist(LLNode* head)
{
  LLNode* l = head;
  LLNode* lc = head;
  LLNode* r = head->next;
  if (!head->next->next)
  {
    r->next = l;
    head = r;
    l->next = NULL;
    return head;
  }
  LLNode* rr = head->next->next;

  while (rr)
  {
    r->next = l;
    l = r;
    r = rr;
    rr = rr->next;
  }
  r->next = l;
  head = r;
  lc->next = NULL;
  return head;
}
LLNode* solve(LLNode* node)
{
  if (!node) return node;
  LLNode* fast = node;
  LLNode* slow = node;
  int c = 1;
  while (1)
  {
    if (!fast->next) break;
    c++;
    if (!fast->next->next) break;
    c++;
    slow = slow->next;
    fast = fast->next->next;
  }
  if (c == 1) return node;
  if (c == 2) {node->val += node->next->val; node->next = NULL; return node; }
  if (c % 2 == 0)
  {
    fast = slow->next;
    slow->next = NULL;
    LLNode* ch = node;
    slow = revlist(ch);
    node = fast;
    while (fast)
    {
      fast->val = fast->val + slow->val;
      fast = fast->next;
      slow = slow->next;
    }
  }
  else
  {
    fast = slow->next;
    slow->next = NULL;
    LLNode* ch = node;
    slow = revlist(ch);
    node = slow;
    slow = slow->next;
    while (slow)
    {
      slow->val += fast->val;
      slow = slow->next;
      fast = fast->next;
    }
  }

  return node;



}
