#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
  int temp=*x;
  *x=*y;
  *y=temp;
}
void selection_sort(int arr[],int n){
  int min;
   for(int i=0;i<n-1;i++){
     min=i;
     for(int j=i+1;j<n;j++)
       if(arr[j]<arr[min])
       min=j;
       swap(&arr[min],&arr[i]);
     
   }
}
void printArray(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr)/sizeof(arr[0]);
  selection_sort(arr,n);
  cout<<"The sorted array is : ";
  printArray(arr,n);
  return 0;
  
}
//Output:
//The sorted array is : 11 12 22 25 34 64 90