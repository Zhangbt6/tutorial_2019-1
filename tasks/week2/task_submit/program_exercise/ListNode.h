#ifndef _LISTNODE
#define _LISTNODE
struct ListNode
{
        int val;
        ListNode *next;
        ListNode(int x): val(x), next(NULL) {}
};
#endif
