/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* head, int pos, int val) {
    if(pos == 0)
    {
        LLNode* temp = new LLNode(val);
        temp->next = head;
        return temp;
    }
    LLNode* temp = head;
    bool flag = true;
    LLNode* xtemp = NULL;
    while(temp->next!=NULL and --pos)
    {
        temp=temp->next;
    }

    LLNode* newnode = new LLNode(val);
    newnode->next = temp->next;
    temp->next = newnode;
    // newnode->next = 

    return head;
}
