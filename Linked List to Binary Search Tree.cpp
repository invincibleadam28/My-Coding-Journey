/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */

Tree* solve(LLNode* head)
{
  if (!head) return NULL;

  LLNode* prev = NULL;
  LLNode* slow = head;
  LLNode* fast = head;
  while (fast && fast->next)
  {
    prev = slow;
    slow = slow->next;
    fast = fast->next->next;
  }

  Tree* root = new Tree();
  root->val = slow->val;

  if (prev)
  {
    prev->next = NULL;
    root->left = solve(head);
  }
  root->right = solve(slow->next);
  return root;
}

