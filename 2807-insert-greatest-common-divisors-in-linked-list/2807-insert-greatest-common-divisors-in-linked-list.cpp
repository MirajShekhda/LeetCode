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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }else{
            ListNode* a = head;
            while(a->next != nullptr){
                int n = gcd(a->val,a->next->val);
                ListNode* New_node = new ListNode(n);
                New_node->next = a->next;
                a->next = New_node;
                a = a->next->next;
            }
        }
        return head;
    }
};