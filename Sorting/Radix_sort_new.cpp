//radixsort
#include<bits/stdc++.h>
using namespace std;
int getMax(int arr[], int n){
    int ans;
    int k=arr[0];
    for(int i=0;i<n;i++){
        ans = max(k,arr[i]);
    }
    return ans;
}
void countSort(int arr[], int n, int exp){
    int count[10]={0};
    for(int i=0;i<n;i++){
        count[(arr[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}
void radixsort(int arr[], int n){
    int max1 = getMax(arr, n);
    for(int exp=1; max1/exp>0 ; exp*=10){
        countSort(arr,n,exp);
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
 
int main()
{
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
    int n = sizeof(arr) / sizeof(arr[0]);
    radixsort(arr, n);
    print(arr, n);
    return 0;
}
//2 24 45 66 75 90 170 802 

