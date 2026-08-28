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
ListNode* moveNtimes(ListNode* curr, int N){
    for(int i=0; i<N && curr!=nullptr; i++){
        curr = curr->next;
    }
    return curr;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL && n==1){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        fast = moveNtimes(fast, n);
        if(fast == NULL) return head->next;
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* del = slow->next;
        slow->next = slow->next->next;
        return head;
        
    }
};