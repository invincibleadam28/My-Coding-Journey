/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* head, int k)
{
  LLNode* prev = NULL;
  LLNode* curr = head;
  LLNode* ahead = NULL;
  int c = 0;
  while (c < k && curr != NULL)
  {
    ahead = curr->next;
    curr->next = prev;
    prev = curr;
    curr = ahead;
    c++;
  }

  if (ahead)
    head->next = solve(ahead, k);

  return prev;


}
