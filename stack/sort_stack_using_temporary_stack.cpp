#include<iostream>
#include<stack>
using namespace std;

int main(){
  int n;
  cout<<"Enter the no. of elements: ";
  cin>>n;
  stack<int> s1,s2;
  int a;
  cout<<"The elements in the stack are: "<<" ";
  for(int i=0;i<n;i++){
    cin>>a;
    s1.push(a);
  }
  while(!s1.empty()){
   int temp=s1.top();
   s1.pop();
   while(!s2.empty() && s2.top()<temp){
     s1.push(s2.top());
     s2.pop();
   }
   s2.push(temp);
  }
  cout<<"The sorted elements are: ";
  while(!s2.empty()){
    cout<<s2.top()<<" ";
    s2.pop();
  }cout<<endl;
  return 0;
}
/*
Enter the no. of elements: 6
The elements in the stack are: 34 3 31 98 92 23
The sorted elements are: 3 23 31 34 92 98
*/