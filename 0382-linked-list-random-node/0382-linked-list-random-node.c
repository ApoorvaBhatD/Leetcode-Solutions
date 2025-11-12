/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdlib.h>
#include <time.h>

typedef struct {
    struct ListNode* head;
} Solution;

Solution* solutionCreate(struct ListNode* head) {
    Solution* obj = (Solution*)malloc(sizeof(Solution));
    obj->head = head;
    srand((unsigned)time(NULL)); // Seed RNG once
    return obj;
}

int solutionGetRandom(Solution* obj) {
    struct ListNode* current = obj->head;
    int result = 0;
    int count = 0;

    // Reservoir sampling algorithm
    while (current != NULL) {
        count++;
        if (rand() % count == 0) {
            result = current->val;
        }
        current = current->next;
    }

    return result;
}

void solutionFree(Solution* obj) {
    free(obj);
}

/**
 * Your Solution struct will be instantiated and called as such:
 * Solution* obj = solutionCreate(head);
 * int param_1 = solutionGetRandom(obj);
 * solutionFree(obj);
*/
