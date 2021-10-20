#include <bits/stdc++.h>
using namespace std;
 
class Node
{
    public:
    int data;
    Node* next;
};

void reverse(Node** head)
{
    
    Node* current = *head; 
    Node *prev=NULL;
    Node *next = NULL;
    while (current != NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
}

void printlist(Node* n){
  while(n!=NULL){
    cout<<n->data<<" ";
    n=n->next;
  }
} 

void push(Node** head_ref, int new_data)
{
    Node* new_node =new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
int main()
{
    Node* head = NULL;
 
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    cout << "Given linked list\n";
    printlist(head);
    reverse(&head);
    cout << "\nReversed linked list\n";
    printlist(head);
    return 0;
}
//Output: Given linked list 4 3 2 1 
//Reversed linked list 1 2 3 4