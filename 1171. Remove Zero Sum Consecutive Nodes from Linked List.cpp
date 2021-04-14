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
    ListNode* removeZeroSumSublists(ListNode* head) {
        //prefix sum
        unordered_map<int,ListNode*>ump;
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ump[0] = temp;
        int curr_sum = 0;
        while(head!=NULL)
        {
            curr_sum+=head->val;
            if(ump.find(curr_sum)!=ump.end())
            {
                ListNode* curr = ump[curr_sum];
                // as because we have to delete thats why make more copy of currnode
                ListNode* ctemp = curr;
                int nsum = curr_sum;
                while(ctemp!=head)
                {
                    ctemp=ctemp->next;
                    nsum+=ctemp->val;
                    if(ctemp!=head)
                    {
                        ump.erase(nsum);
                    }
                }
                curr->next = head->next;
            }
            else
            {
                ump[curr_sum] = head;
            }
            head=head->next;
        }
        return temp->next;
    }
};
