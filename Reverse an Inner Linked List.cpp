LLNode* solve(LLNode* node, int i, int j)
{
  LLNode dummy = {0, node};
  LLNode* cur = &dummy;
  LLNode* prev = NULL;
  LLNode* tmp;
  for (int k = 0; (k <= i) && cur; k++)
  {
    prev = cur;
    cur = cur->next;
  }

  if (!cur) return node;

  LLNode *ni = cur, *ni_1 = prev;
  prev = nullptr;

  for (int k = i; k <= j && cur; k++) {
    tmp = cur->next;
    cur->next = prev;
    prev = cur;
    cur = tmp;
  }

  ni_1->next = prev;
  ni->next = cur;
  return dummy.next;
}
