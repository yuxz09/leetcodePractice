#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


int main()
{
    ListNode* node1 = new ListNode(4);
    ListNode* node2 = new ListNode(3);
    node1 -> next = node2;

    ListNode* node3 = new ListNode(2);
    node2 -> next = node3;

    ListNode* node4 = new ListNode(1);
    node3 -> next = node4;

    ListNode* pre = NULL;
    ListNode* cur = node1;
//    ListNode* ahead = node1->next;
//    //因为之后会让ahead = cur -> next所以必须保证，ahead在cur!=NULL的基础上
//    所以不可以直接ahead

    while(cur != NULL)
    {
        ListNode* ahead = cur->next;
        cur -> next = pre;
        pre = cur;
        cur = ahead;
    }

//////////print
    while(pre != NULL)
    {
        cout << pre -> val << endl;
        pre = pre -> next;
    }
}





