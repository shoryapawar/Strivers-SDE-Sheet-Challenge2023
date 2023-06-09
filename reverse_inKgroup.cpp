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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL ) return head;
        ListNode * dummy = new ListNode(0);
        ListNode * pre = dummy, * curr=dummy,*nex=dummy;
        dummy->next = head;
        int count=0 ; // len of LL
        //count len of LL
        while(curr->next){
            curr=curr->next; // counting
            count++;
        }

        while(count>=k){
            curr=pre->next;
            nex=curr->next;
            for( int i = 1 ; i < k ; i++ ){
                curr->next=nex->next;
                nex ->next = pre->next; //
                pre->next = nex;
                nex = curr->next;
            }
            pre=curr;
            count-=k;
        }
        return dummy->next; //head 
    }
};