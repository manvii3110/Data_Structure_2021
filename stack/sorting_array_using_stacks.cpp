#include<iostream>
#include<stack>
using namespace std;

stack<int> sortStack(stack<int> s1)
{
    stack<int> s2;
  while(!s1.empty())
  {
   int temp=s1.top();
   s1.pop();
   while(!s2.empty() && s2.top()<temp){
     s1.push(s2.top());
     s2.pop();
   }
   s2.push(temp);
  }
  return s2;
}
  
void sortArrayUsingStacks(int arr[],int n){
  stack<int> s1;
  for(int i=0;i<n;i++){
    s1.push(arr[i]);
  }
  stack<int> s2 = sortStack(s1);
  for(int i=0;i<n;i++){
    arr[i]=s2.top();
    s2.pop();
  }
}
int main(){
  int arr[]={10,5,15,45};
  int n = sizeof(arr)/sizeof(arr[0]);
  sortArrayUsingStacks(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
/*
5 10 15 45
*/