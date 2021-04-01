/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* rev(LLNode* node, LLNode** head)
{
  if (!node->next)
  {*head = node; return node;}

  LLNode* prev = rev(node->next, head);
  prev->next = node;

  return node;

}

LLNode* solve(LLNode* node)
{
  if (!node) return node;
  LLNode* k = rev(node, &node);
  k->next = NULL;
  return node;


}
