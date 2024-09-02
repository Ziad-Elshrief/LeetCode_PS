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
        ListNode* checker=head;
        ListNode* prev=NULL;
        bool start=true;
        while(checker != NULL){
            if(start){
                if(checker->val !=val){
                head=checker;
                prev=checker;
                start=false;
                }
            }
            else{
                if(checker->val ==val){
                    prev->next=checker->next;
                }
                else{
                    prev=checker;
                }
            }
            checker =checker->next;
        }
        if(start) head=NULL;
        return head;   
    }
};
