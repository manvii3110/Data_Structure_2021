#include  <iostream>
using namespace std;
 
int shellSort(int arr[], int n)
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for(int j=gap;j<n;j++){
            for(int i=j-gap; i>=0; i=i-gap){
                if(arr[i]<arr[i+gap])
                {
                    break;
                }
                else{
                    swap(arr[i], arr[i+gap]);
                }
            }
        }
        
    }
}
void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}
 
int main()
{
    int arr[] = {12, 34, 54, 2, 3}, i;
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout << "Array before sorting: \n";
    printArray(arr, n);
 
    shellSort(arr, n);
 
    cout << "\nArray after sorting: \n";
    printArray(arr, n);
 
    return 0;
}
/*
Array before sorting: 

12 34 54 2 3 

Array after sorting: 

2 3 12 34 54 


*/