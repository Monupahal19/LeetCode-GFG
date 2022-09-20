/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head==NULL ){
            return false;
        }
        
        map<ListNode* , bool> visit;
        
        ListNode* temp=head;
        
        while(temp!=NULL){
                
            if(visit[temp]==true){
                return true;
            }
            
            visit[temp]=true;
            
            temp=temp->next;
                
            }
        return false;
        }
    
};