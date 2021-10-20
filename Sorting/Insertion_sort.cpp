#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
   for(int i=1;i<n;i++){
     int key=arr[i];
     int j=i-1;
     while(j>=0 && arr[j]>key){
       arr[j+1]=arr[j];
       j=j-1;
     }
     arr[j+1]=key;
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
  insertion_sort(arr,n);
  cout<<"The sorted array is : ";
  printArray(arr,n);
  return 0; 
}
//Output:
//The sorted array is : 11 12 22 25 34 64 90