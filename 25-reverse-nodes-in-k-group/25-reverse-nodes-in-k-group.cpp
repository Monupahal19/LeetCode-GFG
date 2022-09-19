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
    int length(ListNode* head){ // calculating length of linked list
        ListNode* temp = head;
        int cnt = 0;
        while(temp!=NULL){
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(length(head) < k) return head;
        
        if(head==NULL ){
            return NULL;
        }
        
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward=NULL;
        int count =0;
        
        while(curr!=NULL && count<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        
        if(forward!=NULL)
         head->next = reverseKGroup(forward,k);
        
        return prev;
    }
};