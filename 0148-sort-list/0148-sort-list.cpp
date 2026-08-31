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
ListNode* arr2LL(vector<int>& arr, int n, ListNode* head){
    head->val = arr[0];
    ListNode* current = head->next;
    for(int i=1; i<n; i++){
        current->val = arr[i];
        current = current->next;
    }
    return head;
}
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        vector<int> nums;
        ListNode* temp = head;
        while(temp!=NULL){
            nums.push_back(temp->val);
            temp = temp->next;
        }
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return arr2LL(nums, n, head);
        // int i=0; 
        // ListNode* temp2 = head;
        // while(temp2!=NULL){
        //     temp2->val = nums[i];
        //     i++;
        //     temp2 = temp2->next;
        // }
        // return head;

    }
};