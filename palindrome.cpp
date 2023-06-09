#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int>* reverseLL(LinkedListNode<int> * head){
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> * next = NULL;
    while(head){
        next = head->next; //pointing pointer to next node bcz we are breaking link b/w first node to second node
        head->next=prev; // pointing first node into prev 
        prev = next;// point second node to  first 
        head=next;
    }
    return prev;

}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL){
     return true;
     }
    LinkedListNode<int> * s = head;
    LinkedListNode<int> * f = head;

    //find middle first
    while( f->next && f->next->next){
         s=s->next;
         f=f->next->next;
    }

    //reverse the list after the midddle node so we can compare from starting
    s->next = reverseLL(s->next); 
    
    //mode slow to next node for comparing 
    s= s->next;
    LinkedListNode<int> * d = head;//a dummy node pointing to head
    while(s){
        if(d->data!=d->data) return false;
        s=s->next;
        d=d->next;
    }
    return true;

}