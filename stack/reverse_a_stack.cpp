#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int ele){
  if(s.empty()){
    s.push(ele);
    return ;
  }
  int topEle=s.top();
  s.pop();
  insertAtBottom(s,ele);
  s.push(topEle);
}
void reverse(stack<int> &s)
{
    if(s.empty()){
        return;
    }
  int ele=s.top();
  s.pop();
  reverse(s);
  insertAtBottom(s,ele);
}
int main(){
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  reverse(s);
  cout<<"The reverse of the stack is: ";
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }cout<<endl;
}
//The reverse of the stack is: 10 20 30