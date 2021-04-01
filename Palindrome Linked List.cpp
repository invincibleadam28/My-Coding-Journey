/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* head)
{
  if (!head || !head->next)return true;
  if (!head->next->next)
  {
    if (head->val == head->next->val) return true;
    else return false;
  }

  LLNode* fast = head;
  LLNode* slow = head;
  int c = 0;
  while (1)
  {
    if (!fast->next) break;
    if (!fast->next->next) break;
    fast = fast->next->next;
    slow = slow->next;
  }

  stack<int> s;
  LLNode* temp = slow;
  while (temp->next)
  {
    s.push(temp->next->val);
    temp = temp->next;
  }

  temp = head;
  while (!s.empty())
  {
    if (s.top() != temp->val) return false;
    s.pop();
    temp = temp->next;
  }
  return true;




}