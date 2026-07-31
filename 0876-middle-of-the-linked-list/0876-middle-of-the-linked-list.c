/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    if (head==NULL) return head;
    struct ListNode* temp=head;
    struct ListNode* midList=head;
    int count=0,mid;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int check=1;
    mid=(count/2)+1;

        while(check<mid){
            
            midList=midList->next;
            check++;
        }
    
    return midList;

}