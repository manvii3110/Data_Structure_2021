#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int l,int r,int x){
  int mid=(l+r)/2;
  if(l<=r){
  if(arr[mid]==x)
  return mid;
  if(arr[mid]>x)
  return binary_search(arr,l,mid-1,x);
  if(arr[mid]<x)
  return binary_search(arr,mid+1,r,x);
  }
  return -1;
  
}

int main(){
  int arr[]={2, 3, 4, 10, 40};
  int x=10;
  int n= sizeof(arr)/sizeof(arr[0]);
  int result = binary_search(arr,0,n-1,x);
  if(result==-1)
  cout<<"Element is not present in the array"<<endl;
  else
  cout<<"Element is present at index: "<<result<<endl;
  return 0;
}
//Output: Element is present at index: 3