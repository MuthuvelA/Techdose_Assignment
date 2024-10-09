#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main(){
    int arr[]={1,3,2};
    bubbleSort(arr,3);
    for(int i=0;i<3;i++)  cout<<arr[i];
}