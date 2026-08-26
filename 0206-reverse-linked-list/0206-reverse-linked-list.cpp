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
ListNode* reverseLL(ListNode* head){
 if(head == NULL) return head;
        ListNode* temp = head;
        ListNode* prev;
        ListNode* front;
        while(temp != NULL){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
}
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       return reverseLL(head);
    }
};