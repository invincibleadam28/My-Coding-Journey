/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node, int k)
{
  int c = 0;
  LLNode* temp = node;
  while (temp->next)
  {
    c++;
    temp = temp->next;
  }
  k = c - k;
  temp = node;
  while (k--) temp = temp->next;

  return temp->val;



}