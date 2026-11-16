class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return;

        ListNode* penultimate = head;
        while (penultimate->next->next) penultimate = penultimate->next;
        
        penultimate->next->next = head->next;
        head->next = penultimate->next;
    
        penultimate->next = NULL;
        
        reorderList(head->next->next);
    }
};
