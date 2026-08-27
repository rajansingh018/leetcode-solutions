/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(head == NULL || head->next == NULL) cout<<"no cycle";
        int i = 0;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                ListNode* tempb = head;
                ListNode* tempf = fast;

                while(tempb != tempf){
                    tempb = tempb->next;
                    tempf = tempf->next;
                }
                return tempb;
            }
        }
        return NULL; 
    }
};