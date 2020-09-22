#include <iostream>
//#include <stack>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
	{
		ListNode* res = new ListNode(-1);
		ListNode* temp = res;
		ListNode* p = l1;
		ListNode* q = l2;
		int flag = 0;
		while (q != nullptr || p != nullptr)
		{
			int x = (p != nullptr ? p->val : 0);
			int y = (p != nullptr ? p->val : 0);
			int value = (x + y + flag) % 10;
			flag = (x + y + flag) / 10;
			temp->next = new ListNode(value);
			if (p != nullptr)
			{
				p = p->next;
			}
			if (q != nullptr)
			{
				q = q->next;
			}
			temp = temp->next;
		}
		
		if (flag)
		{
			temp->next = new ListNode(1);
		}
		return res->next;
	}
};