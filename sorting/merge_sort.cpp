#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
        vector<int> temp; 
        int left = low;      
        int right = mid + 1;   
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                right++;
            }
        }
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }                
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }

void mergeSort(int arr[], int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main(){
    int arr[]={1,3,2};
    mergeSort(arr,0,3);
    for(int i=0;i<3;i++)  cout<<arr[i];
}