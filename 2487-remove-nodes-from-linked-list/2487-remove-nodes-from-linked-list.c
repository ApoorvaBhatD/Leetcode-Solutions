#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 *
struct ListNode {
    int val;
    struct ListNode *next;
};
*/

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    while (curr) {
        struct ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

struct ListNode* removeNodes(struct ListNode* head) {
    
    head = reverseList(head);

    struct ListNode* curr = head;
    int maxVal = curr->val;
    struct ListNode* prev = curr;
    curr = curr->next;

    while (curr) {
        if (curr->val < maxVal) {
            
            prev->next = curr->next;
            free(curr);
            curr = prev->next;
        } else {
            maxVal = curr->val;
            prev = curr;
            curr = curr->next;
        }
    }

   
    head = reverseList(head);
    return head;
}
