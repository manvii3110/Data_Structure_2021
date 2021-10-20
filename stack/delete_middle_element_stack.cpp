#include<iostream>
#include<stack>
using namespace std;

void deleteMid(stack<char> &st, int n, int curr=0){
  if(st.empty() or curr==n)
  return;
  char k=st.top();
  st.pop();
  deleteMid(st,n,curr+1);
  if (curr != n/2)
     st.push(k);
}
int main(){
stack<char> st;
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
    st.push('5');
    st.push('6');
    st.push('7');
 
    deleteMid(st, st.size());
    cout<<"Elements after deleting middle element is: ";
    while (!st.empty())
    {
      cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}
/*
Elements after deleting middle element is: 7 6 5 3 2 1
*/