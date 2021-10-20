#include <bits/stdc++.h>
using namespace std;
 
class Node
{
    public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
    Node* new_node =new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
int search(Node* head, int x)
{
    Node* current = head; 
    int count=0;
    while (current != NULL)
    {
       if(current->data == x)
       count++;
       current=current->next;
    }
    return count;
}
 
int main()
{
    Node* head = NULL;
    int x = 21;
 
    
    push(&head, 10);
    push(&head, 21);
    push(&head, 11);
    push(&head, 21);
    push(&head, 14);
 
    cout<<search(head, 21);
    return 0;
}
//Output: 2