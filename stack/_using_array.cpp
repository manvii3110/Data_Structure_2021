#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack{
  int top;
  public:
    int a[MAX];
    Stack(){
      top=-1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x){
  if(top>=MAX-1){
    cout<<"Stack overflow";
    return false;
  }
  else{
    a[++top]=x;
    cout<<x<<" pushed into stack."<<"\n";
    return true;
  }
}
int Stack::pop(){
  if(top<0){
    cout<<"stack underflow";
    return 0;
  }
  else{
    int x = a[top--];
    return x;
  }
}
int Stack::peek(){
  if(top<0){
    cout<<"stack is empty";
    return 0;
  }
  else{
    int x=a[top];
    return x;
  }
}

bool Stack::isEmpty(){
  return(top<0);
}

int main(){
  class Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  cout<< s.pop()<<" popped from the stack\n";
  cout<<"Elements present in the stack: ";
  while(!s.isEmpty()){
    cout<<s.peek()<<" ";
    s.pop();
  }
  return 0;
}

//Output:
//10 pushed into stack.
//20 pushed into stack.
//30 pushed into stack.
//30 popped from the stack
//Elements present in the stack : 20 10
