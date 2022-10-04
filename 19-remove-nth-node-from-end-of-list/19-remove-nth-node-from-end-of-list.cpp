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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==NULL){
            return head;
        }
        
        ListNode* temp =head;
        int count=0;
        
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        temp = head;
        int x = count - n;
        
        if(x==0){
            ListNode* node = head;
            head=head->next;
            delete(node);
            return head;
        }
        
        while(x!=0){
            
            x--;
            if(x==0){
               ListNode* node = temp ->next;
                temp->next = temp->next->next;
                delete(node);
            }
            temp = temp->next;
        }
        
        
        return head;
    }
};