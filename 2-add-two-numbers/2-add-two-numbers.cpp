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
//     ListNode* reverse(ListNode* head){
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* forward = NULL;
        
//         while(curr!= NULL){
//             forward = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = forward;
            
//         }
//         return prev;
//     }
    void insertAtTail(ListNode* &head,ListNode* &tail,int digit){
        ListNode* temp = new ListNode(digit);
        if(head==NULL){
            head = temp;
            tail = temp;
            return;
        }    
        else{
            tail ->next = temp;
            tail = temp;
        }
    }
    
    ListNode* add(ListNode* l1,ListNode* l2){
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;
        
        int carry =0;
        
        while(l1!=NULL || l2!=NULL || carry!=0){
            int v1= 0;
                if(l1!=NULL){
                    v1 = l1->val;
                }
            int v2 =0;
            if(l2!=NULL){
                v2 = l2 ->val;
            }
            int sum = carry + v1 + v2;
            int digit = sum%10;
            insertAtTail(ansHead,ansTail,digit);
            carry = sum/10;
            
            if(l1!=NULL) l1 = l1->next;
            if(l2!=NULL) l2 = l2->next;
        }
        return ansHead;
        
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
       // l1 = reverse(l1);
        //l2 = reverse(l2);
        
        ListNode* ans = add(l1,l2);
        //ans = reverse(ans);
        return ans;
    }
};