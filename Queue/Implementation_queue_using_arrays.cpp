#include<iostream>
using namespace std;

class Queue{
  private:
  int front;
  int rear;
  int arr[5];
  public:
      Queue()
      {
      front = -1;
      rear=-1;
      for(int i=0;i<5;i++){
         arr[i]=0;
    }
  }
  bool isEmpty(){
    if(rear==-1 && front==-1)
    return true;
    else
    return false;
  }
  bool isFull(){
    if(rear==4)
    return true;
    else
    return false;
  }
  void enqueue(int var){
    if(isFull()){
      cout<<"Queue is FULL"<<endl;
      return;
    }
    else if(isEmpty()){
      front=0;
      rear=0;
      arr[rear]=var;
    }
    else{
      rear++;
      arr[rear]=var;
    }
  }
  int dequeue(){
    int x;
    if(isEmpty()){
      cout<<"Queue is empty!!"<<endl;
      return 0;
    }
    else if(front==rear){
      x=arr[front];
      arr[front]=0;
      front=-1;
      rear=-1;
      return x;  
    }
    else{
      x=arr[front];
      arr[front]=0;
      front++;
      return x;
    }
  }
  int count(){
    return (rear-front+1);
  }
  void display(){
    cout<<"All values in the Queue are - "<<endl;
    for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
    }
  }
};
int main(){
  Queue q1;
  int option,value;
  do{
    cout<<"\n\nWhat operation  do you want to perform? Select Option number. Enetr 0 to exit."<<endl;
    cout<<"1. Enqueue()"<<endl;
    cout<<"2. Dequeue()"<<endl;
    cout<<"3. isEmpty()"<<endl;
    cout<<"4. isFull()"<<endl;
    cout<<"5. count()"<<endl;
    cout<<"6. display()"<<endl;
    cout<<"7. Clear Screen"<<endl<<endl;
    cin>>option;
    switch(option){
      case 0 :
         break;
      case 1 :
         cout<<"Enqueue operation \nEnter an item to Enqueue in the Queue"<<endl;
         cin>>value;
         q1.enqueue(value);
         break;
      case 2 :
      cout<<"Dequeue Operation \nDequeued Value: "<<q1.dequeue()<<endl;
         break;
      case 3 :
      if(q1.isEmpty())
      cout<<"Queue is Empty"<<endl;
      else
      cout<<"Queue is Not Empty"<<endl;
         break;
      case 4 :
      if(q1.isFull())
      cout<<"Queue is Full"<<endl;
      else
      cout<<"Queue is Not Full"<<endl;
         break;
      case 5 :
      cout<<"Count Operation \nCount of items in Queue: "<<q1.count()<<endl;
         break;
      case 6 :
      cout<<"Display Function called - "<<endl;
      q1.display();
         break; 
      case 7 :
      system("cls");
         break; 
      default :
      cout<<"Enter Proper Option Number "<<endl;
         break;                
    }
  }while(option!=0);
  return 0;
}
/*

------------------------------------------------------------OUTPUT----------------------------------------------------------------


What operation  do you want to perform? Select Option number. Enetr 0 to exit.

1. Enqueue()

2. Dequeue()

3. isEmpty()

4. isFull()

5. count()

6. display()

7. Clear Screen



1

Enqueue operation 

Enter an item to Enqueue in the Queue

34





What operation  do you want to perform? Select Option number. Enetr 0 to exit.

1. Enqueue()

2. Dequeue()

3. isEmpty()

4. isFull()

5. count()

6. display()

7. Clear Screen



1

Enqueue operation 

Enter an item to Enqueue in the Queue

56





What operation  do you want to perform? Select Option number. Enetr 0 to exit.

1. Enqueue()

2. Dequeue()

3. isEmpty()

4. isFull()

5. count()

6. display()

7. Clear Screen



1

Enqueue operation 

Enter an item to Enqueue in the Queue

89





What operation  do you want to perform? Select Option number. Enetr 0 to exit.

1. Enqueue()

2. Dequeue()

3. isEmpty()

4. isFull()

5. count()

6. display()

7. Clear Screen



1

Enqueue operation 

Enter an item to Enqueue in the Queue

45





What operation  do you want to perform? Select Option number. Enetr 0 to exit.

1. Enqueue()

2. Dequeue()

3. isEmpty()

4. isFull()

5. count()

6. display()

7. Clear Screen



3

Queue is Not Empty





What operation  do you want to perform? Select Option number. Enetr 0 to exit.

1. Enqueue()

2. Dequeue()

3. isEmpty()

4. isFull()

5. count()

6. display()

7. Clear Screen



5

Count Operation 

Count of items in Queue: 4





What operation  do you want to perform? Select Option number. Enetr 0 to exit.

1. Enqueue()

2. Dequeue()

3. isEmpty()

4. isFull()

5. count()

6. display()

7. Clear Screen



4

Queue is Not Full





What operation  do you want to perform? Select Option number. Enetr 0 to exit.

1. Enqueue()

2. Dequeue()

3. isEmpty()

4. isFull()

5. count()

6. display()

7. Clear Screen



2

Dequeue Operation 

Dequeued Value: 34





What operation  do you want to perform? Select Option number. Enetr 0 to exit.

1. Enqueue()

2. Dequeue()

3. isEmpty()

4. isFull()

5. count()

6. display()

7. Clear Screen



6

Display Function called - 

All values in the Queue are - 

0 56 89 45 0 



What operation  do you want to perform? Select Option number. Enetr 0 to exit.

1. Enqueue()

2. Dequeue()

3. isEmpty()

4. isFull()

5. count()

6. display()

7. Clear Screen




*/