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
   
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        if(!list1)
        {
           return list2; 
        }
        if(!list2)
        {
           return list1; 
        }
        ListNode* Start=list1 , * End=list1 , *tail=list2 ,*prevtail=NULL;
        for(int i=0;i<a-1;i++)
        {
            Start=Start->next;
        }
        cout<<"start : "<<Start->val;
        
        for(int i=0;i<b+1;i++)
        {
            End=End->next;
        }
        cout<<"end"<<End->val;
        
        while(tail)
        {
            prevtail=tail;
            tail=tail->next;
        }
        cout<<"tail : "<<prevtail->val;
        
        // algo
        
        Start->next=list2;
        prevtail->next=End;
        return list1;
        
    }
};