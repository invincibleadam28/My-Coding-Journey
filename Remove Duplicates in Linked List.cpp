/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* head)
{
	set<int> s;
	if (!head || !head->next) return head;
	LLNode* b = head;
	s.insert(b->val);

	LLNode* f = b->next;

	while (f)
	{
		if (s.find(f->val) != s.end())
		{
			f = f->next;
			b->next = f;
		}
		else
		{
			s.insert(f->val);
			f = f->next;
			b = b->next;
		}
	}

	return head;

}
