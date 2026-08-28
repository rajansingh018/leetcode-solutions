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
        int cnt = 0;
        ListNode* temp = head;
        while(temp!= NULL){
            cnt++;
            temp = temp->next;
        }
        if(cnt == n){
            head = head->next;
            return head;
        }
        int linkres = cnt-n;
        ListNode* tmp = head;
        while(tmp != NULL){
            
            linkres--;
            if(linkres == 0){
                break;
            }
            tmp = tmp->next;
        }
        ListNode* del = tmp;
        tmp->next = tmp->next->next;
        // delete del;
        return head;
    }
};