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
    bool hasCycle(ListNode *head) {
        if(head==nullptr || head->next == nullptr){
            return false;
        }
        ListNode* temp = head;
        ListNode* curr = head->next;
        while(temp != curr){
            if(curr->next==nullptr || curr->next->next==nullptr){
                return false;
            }
            temp = temp->next;
            curr = curr->next->next;
        }
        return true;
    }
};