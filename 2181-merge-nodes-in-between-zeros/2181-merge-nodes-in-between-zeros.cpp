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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* modify = temp;
        while(temp != nullptr){
            int sum = 0;
            while(temp->val !=0){
                sum += temp->val;
                temp = temp->next;
            }
            modify->val = sum;
            temp = temp->next;
            modify->next = temp;
            modify = modify->next;
        }
        return head->next;
    }
};