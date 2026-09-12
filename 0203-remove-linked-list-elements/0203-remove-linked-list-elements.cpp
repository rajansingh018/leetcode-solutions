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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return NULL;
        // if(head->next==NULL && head->val == val){
        //     return NULL;
        // }
        // if(head->next==NULL && head->val != val){
        //     return head;
        // }
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* temp = head;
        while(temp != nullptr){
            if(temp->val == val){
                prev->next = temp->next;
                ListNode* todel = temp;
                temp = temp->next;
                delete todel;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
          
        }
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};