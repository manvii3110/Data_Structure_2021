#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int n,int x){
  for(int i=0;i<n;i++){
  if(arr[i]==x){
    return i;
  }
  }
  return -1;
}

int main(){
  int arr[]={2, 3, 4, 10, 40};
  int x=10;
  int n= sizeof(arr)/sizeof(arr[0]);
  int result = linear_search(arr,n,x);
  if(result==-1)
  cout<<"Element is not present in the array"<<endl;
  else
  cout<<"Element is present at index: "<<result<<endl;
  return 0;
}
//Output: Element is present at index: 3