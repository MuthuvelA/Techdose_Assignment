#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minInd = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minInd])
                minInd = j;
        }
        swap(arr[minInd], arr[i]);
    }
}

int main(){
    int arr[]={1,3,2};
    selection_sort(arr,3);
    for(int i=0;i<3;i++)  cout<<arr[i];
}