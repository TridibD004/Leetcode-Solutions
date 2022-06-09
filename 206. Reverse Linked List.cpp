/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head,ListNode *new1=NULL) {
        if(head==NULL)
            return new1;
        ListNode *p=reverseList(head->next,head);
        head->next=new1;
        return p;
    }
};
