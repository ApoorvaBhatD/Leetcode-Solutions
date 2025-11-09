#include <stdbool.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNodes(struct ListNode* head) {
   
    int count = 0;
    struct ListNode* temp = head;
    while (temp) { count++; temp = temp->next; }

    if (count == 0) return NULL;

   
    int* arr = malloc(count * sizeof(int));
    temp = head;
    for (int i = 0; i < count; i++) {
        arr[i] = temp->val;
        temp = temp->next;
    }
    
   
    bool* keep = malloc(count * sizeof(bool));
    for (int i = 0; i < count; i++) {
        keep[i] = true;
        for (int j = i + 1; j < count; j++) {
            if (arr[j] > arr[i]) {
                keep[i] = false;
                break;
            }
        }
    }

   
    struct ListNode* newHead = NULL;
    struct ListNode* last = NULL;
    temp = head;
    for (int i = 0; i < count; i++) {
        if (keep[i]) {
            struct ListNode* node = malloc(sizeof(struct ListNode));
            node->val = arr[i];
            node->next = NULL;
            if (!newHead) {
                newHead = node;
            } else {
                last->next = node;
            }
            last = node;
        }
        temp = temp->next;
    }

   
    free(arr);
    free(keep);

    return newHead;
}
