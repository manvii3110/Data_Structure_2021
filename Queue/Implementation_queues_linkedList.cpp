#include<bits/stdc++.h>
using namespace std;

struct QNode{
  int data;
  QNode* next;
  QNode(int d){
    data = d;
    next = NULL;
  }
};

struct Queue{
  QNode* front, *rear;
  Queue(){
    front = rear = NULL;
  }
  bool isEmpty(){
    if(front==NULL && rear==NULL)
    return true;
    else
    return false;
  }
  void enQueue(int x){
    QNode* temp = new QNode(x);
    if(rear==NULL){
       front=rear=temp;
    }
    else{
      rear->next = temp;
      rear=temp;
    }
  }
  void deQueue(){
    if(front==NULL)
       return;
    QNode* temp = front;
    front = front->next;
    if(front==NULL)
    rear=NULL;
    delete(temp);   
  }
  int count(){
    int c=0;
    QNode* temp = front;
    while(temp!=NULL){
      c++;
      temp=temp->next;
    }
    return c;
  }
};

int main(){
  Queue q;
  q.enQueue(10);
  q.enQueue(20);
  q.deQueue();
  q.deQueue();
  q.enQueue(30);
  q.enQueue(40);
  q.enQueue(50);
  q.deQueue();
  cout<< "Queue Front : "<<(q.front)->data<<endl;
  cout<< "Queue Rear : "<<(q.rear)->data<<endl;
  cout<< "Count of queue : "<<q.count()<<endl;
  cout<< "Is Queue empty ? "<<q.isEmpty()<<endl;
}

/*
----------------------------------------------------------------------------output------------------------------------------------------------------------------
Queue Front : 40

Queue Rear : 50

Count of queue : 2

Is Queue empty ? 0

*/