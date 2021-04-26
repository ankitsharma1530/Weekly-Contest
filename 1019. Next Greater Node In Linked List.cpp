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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>res;
        stack<int>s;
        vector<int>arr;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=arr.size()-1;i>=0;i--)
        {
            while(!s.empty() && arr[i]>=s.top())
            {
                s.pop();
            }
            if(s.empty())
            {
                res.push_back(0);
            }
            else
            {
                res.push_back(s.top());
            }
            s.push(arr[i]);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
