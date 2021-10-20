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
 
void GetNthfromEnd(Node* head, int n)
{
    
    Node* temp = head;
    int len=0,i;  
    while (temp != NULL)
    {
      temp=temp->next;
      len++;
    }
    if(len<n)
    return;
    temp=head;
    for(i=1;i<len-n+1;i++){
      temp=temp->next;
    }
    cout << temp->data;
 
    return;
}
 
int main()
{
    Node* head = NULL;
     push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 35);
 
    GetNthfromEnd(head, 4);
    return 0;
}
//Output: 35