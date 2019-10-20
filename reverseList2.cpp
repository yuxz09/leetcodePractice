/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 *
 *
 * Recursion
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
    	if(head == NULL || head -> next == NULL)//考虑head == NULL的情况
    	{
    		return head;
    	}
    	ListNode* newtail = reverseList(head->next);
    	head->next->next = head;
    	head -> next = NULL;
    	return newtail;
    }
};