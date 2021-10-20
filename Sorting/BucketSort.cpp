#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
void BucketSort(float arr[], int n){
    vector<float> bucket[10];
    for(int i=0;i<n;i++){
        int bi=arr[i]*n;
        bucket[bi].push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
    sort(bucket[i].begin(), bucket[i].end());
    }
    int index=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[index++]=bucket[i][j];
        }
    }
}
int main()
{
    float arr[]
        = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };
    int n = sizeof(arr) / sizeof(arr[0]);
    BucketSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//0.1234 0.3434 0.565 0.656 0.665 0.897 

