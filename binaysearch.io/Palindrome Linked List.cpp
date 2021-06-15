/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */

LLNode* reverse(LLNode* node){
    LLNode* curr = node;
    LLNode* prev = NULL;
    LLNode* next = NULL;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    } 
    return prev;
}

bool solve(LLNode* node) {
    if(!node or !node->next){
        return true;
    }

    // find the middle element
    LLNode* slow = node;
    LLNode* fast = node;
    while(fast->next and fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    LLNode* temp1 = node;
    LLNode* temp2 = reverse(slow->next);
    while(temp2){
        if(temp2->val!=temp1->val){
            return false;
        }
        temp2=temp2->next;
        temp1=temp1->next;
    }
    return true;
}
