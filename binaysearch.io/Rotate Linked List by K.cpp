LLNode* solve(LLNode* node, int k) {
    LLNode *curr = node, *end = node;
    while (k--) {
        end = end->next;
    }
    while (end != NULL and end->next != NULL) {
        curr = curr->next;
        end = end->next;
    }
    if (end != NULL) {
        end->next = node;
        node = curr->next;
        curr->next = NULL;
    }
    return node;
}
