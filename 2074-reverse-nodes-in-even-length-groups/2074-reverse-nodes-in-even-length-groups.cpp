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
class Solution
{
public:
    int count(ListNode *head)
    {
        int count = 0;
        while (head != NULL)
        {
            head = head->next;
            count++;
        }
        return count;
    }
    ListNode *reverseEvenLengthGroups(ListNode *head)
    {
        int n = count(head);
        if (n == 1 || n == 2)
            return head;
        int grp = 2, visited = 1;
        ListNode *temp = head, *t = head->next;
        while (1)
        {
			// for last group
            if (n - visited < grp)
            {
			//only if elements are in even number
                if ((n - visited) % 2 == 0)
                {
					// for reverse the linked list
                    ListNode *prev = t, *curr = t->next, *next = t->next->next;
                    for (int i = 1; i < grp; i++)
                    {
                        curr->next = prev;
                        prev = curr;
                        curr = next;
                        if (next == NULL)
                            break;
                        next = next->next;
                    }
                    temp->next = prev;
                    t->next = curr;
                    visited += grp;
                    grp++;
                    temp = t;
                }
                break;
            }
			// for even group
            else if (grp % 2 == 0 && n - visited >= grp)
            {
			// reverse the linked list
                ListNode *prev = t, *curr = t->next, *next = t->next->next;
                for (int i = 1; i < grp; i++)
                {
                    curr->next = prev;
                    prev = curr;
                    curr = next;
                    if(next==NULL)
                        break;
                    next = next->next;
                }
                temp->next = prev;
                t->next = curr;
				// update visited number of nodes and group number
                visited += grp;
                grp++;
                temp = t;
                t = temp->next;
            }
			// for odd group
            else if (grp % 2 == 1 && n - visited >= grp)
            {
			 // no need to reverse just traverse only
                for (int i = 0; i < grp; i++)
                {
                    temp = temp->next;
                }
                t = temp->next;
				// update visited number of nodes
                visited += grp;
                grp++;
            }
			// if perfect linked list then break 
            if(visited==n)break;
        }
        return head;
    }
};