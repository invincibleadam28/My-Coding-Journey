/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
  if (!node->next->next)
    return node->next->val;
  LLNode* fast = node;
  LLNode* slow = node;
  while (1)
  {
    if (!fast->next) break;
    slow = slow->next;
    if (!fast->next->next) break;
    fast = fast->next->next;
  }
  return slow->val;

}