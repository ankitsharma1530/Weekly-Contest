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
    ListNode* partition(ListNode* head, int x) {
        ListNode* s = new ListNode(0);
        ListNode* h = new ListNode(0);
        ListNode* small = s;
        ListNode* high = h;
        while(head!=NULL)
        {
            if(head->val<x)
            {
                // small
                small->next = head;
                small=small->next;
            }
            else
            {
                high->next=head;
                high=high->next;
            }
            head=head->next;
        }
        small->next=h->next;
        high->next=NULL;
        return s->next;
    }
};
