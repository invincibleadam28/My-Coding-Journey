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
  Tree* root = NULL;
  if (!head) return root;

  LLNode* temp = head;
  root = new Tree();
  root->val = temp->val;
  Tree* r = root;

  while (temp->next)
  {
    if (temp->next->val < temp->val)
    {
      root->left = new Tree();
      temp = temp->next;
      root = root->left;
      root->val = temp->val;
    }
    else
    {
      root->right = new Tree();
      temp = temp->next;
      root = root->right;
      root->val = temp->val;
    }
  }

  return r;


}
