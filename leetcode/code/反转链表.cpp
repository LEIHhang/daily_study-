/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur=NULL;
        while(head!=NULL)
        {
            ListNode* t = head->next;
            head->next=cur;
            cur=head;
            head=t;
        }
        return cur;
    }
};