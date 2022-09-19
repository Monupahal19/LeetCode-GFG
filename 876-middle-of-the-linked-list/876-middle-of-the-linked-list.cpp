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
    int getLength(ListNode* head){
        int length=0;
        
        while(head!=NULL){
            head=head->next;
            length++;
        }
        return length;
    }
    
    ListNode* middleNode(ListNode* head) {
        
        int l=getLength(head);
        
        int ans=l/2 + 1;
        while(ans>1){
            head=head->next;
            ans--;
        }
        
        return head;
        
    }
};