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

        if(head==nullptr) return false;
        if(head->next== nullptr) return true;

        ListNode * dummy=nullptr;

        ListNode * temp=head;

        while(temp !=nullptr){
            
            ListNode* newNode = new ListNode(temp->val); 

            newNode->next=dummy;
            dummy=newNode;
            temp=temp->next;
        }


        temp=head;

        while(temp != nullptr && dummy !=nullptr){
            if(temp->val == dummy->val){
                temp=temp->next;
                dummy=dummy->next;
            }

            else {
                return false;
            }
        }

        return true;
    }
};