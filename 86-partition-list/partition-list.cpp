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
    ListNode* partition(ListNode* head, int x) {
       
        
       
        ListNode * curr=head;
        ListNode * smallHead=new ListNode(0);
        ListNode * bigHead=new ListNode(0);

        ListNode * small=smallHead;
        ListNode * big=bigHead;

       
        while(curr !=nullptr){
           if (curr->val < x) {
                small->next = curr;
                small = small->next;
            } else {
                big->next = curr;
                big = big->next;
            }
            curr = curr->next;
            
        }

        big->next=nullptr;

        small->next=bigHead->next;;

        return smallHead->next;
    }
};