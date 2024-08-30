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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp;
        ListNode* prev_node=NULL;
        if(head != NULL){
            while(head->next != NULL){
                temp=head->next;
                head->next=prev_node;
                prev_node=head;
                head=temp;   
        }
        head->next=prev_node;
        }
       return head;
    }
};
