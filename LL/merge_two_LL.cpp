#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL)return second;
    if(second==NULL) return first;
    Node<int> * l1 = first;  
    Node<int> * l2 = second;
         if(l1->data>l2->data)
         swap(l1,l2);
        Node<int> * dummy =l1;
        while(l1 && l2){
                Node<int> * temp=NULL;
                while(l1 && l1->data<=l2->data){
                temp=l1;
                l1=l1->next;
                }
                temp->next=l2;
                swap(l1,l2);

        }
        return dummy;
}
