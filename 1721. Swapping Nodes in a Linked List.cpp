class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int len=0;
        ListNode* temp=head;
        ListNode* t1=head;
        ListNode* t2=head;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        int start = 0;
        int end = 0;
        
        while(start<k-1)
        {
            t1=t1->next;
            start++;
        }
        while(end<len-k)
        {
            t2=t2->next;
            end++;
        }
        int c = t1->val;
        t1->val=t2->val;
        t2->val=c;
        return head;
    }
};
