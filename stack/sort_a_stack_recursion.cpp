#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &s, int x){
  if(s.empty() or x>s.top()){
    s.push(x);
    return;
  }
  int temp=s.top();
  s.pop();
  sortedInsert(s,x);
  s.push(temp);
}
void SortedStack(stack<int> &s){
  if(!s.empty()){
    int x=s.top();
    s.pop();
    SortedStack(s);
    sortedInsert(s,x);
  }
}
void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main(){
  stack<int> s;
  s.push(5);
  s.push(-2);
  s.push(9);
  s.push(-7);
  s.push(3);
  cout << "Stack before sorting: ";
    printStack(s);
 
    SortedStack(s);
 
    cout << "Stack after sorting: ";
    printStack(s);
}
/*
Stack before sorting: 3 -7 9 -2 5
Stack after sorting: 9 5 3 -2 -7
*/