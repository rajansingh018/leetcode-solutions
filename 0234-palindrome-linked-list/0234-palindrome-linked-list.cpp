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
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return true;
        stack<int> st;
        ListNode* temp = head;
        while(temp!=NULL){
            st.push(temp->val);
            temp = temp->next;
        }
        ListNode* temp2 = head;
        while(temp2 !=NULL){
            if(temp2->val != st.top()) return false;
            temp2 = temp2->next;
            st.pop();
        }
        return true;
    }
};