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
    ListNode* Mid(ListNode* head)
    {
        ListNode *slow=head, *fast=head;
        while(fast)
        {
            fast=fast->next;
            if(fast)
            {
                fast=fast->next;
                if(fast)
                {
                    slow=slow->next;
                }
                
            }
        }
        cout<<"mid : "<<slow->val;
        return slow;
    }
    
    void reversemid(ListNode* base)
    {
        ListNode* cur=base->next, * prev=NULL , *forw=base->next->next;
        while(cur)
        {
            cur->next=prev;
            prev=cur;
            cur=forw;
            if(forw)
            {
                forw=forw->next;
            }
        }
        base->next=prev;
       
    }
    
    bool isPalindrome(ListNode* head) 
    {
        if(head==NULL|| head->next==NULL)
        {
            return true;
        }
        ListNode* Mid1=Mid(head);
        reversemid(Mid1);
        ListNode* ptr1=head , *ptr2=Mid1->next;
        while(ptr2)
        {
            if(ptr1->val!=ptr2->val)
            {
                return false;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        cout<<"\n";
        reversemid(Mid1);
        while(head)
        {
            cout<<" "<<head->val;
            head=head->next;
        }
        return true;
        
    }
};