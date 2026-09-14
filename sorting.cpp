#include<bits/stdc++.h>
using namespace std;
//  selection sort time complexity = o(n*n) .
// find the smallest element from the unsorted array.
// swap it with the first unsorted pos.
// repeat the process.
void selection_sort(int arr[],int n){
    for(int i = 0;i<=n-2;i++){
        int mini  = i;
        for(int j = i;j<=n-1;j++){
            if (arr[j]<arr[mini]){
                mini  = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
// bubble sort best time complexity = o(n) worst or avg = o(n*n)
// compares two adjacent elements and swap them if they are in the wrong order.
// the largest element bubbles up to the correct position after each pass.
void bubble_sort(int arr[],int n){
    for(int i = n-1;i>=0;i--){
         int didswap = 0;
        for( int j = 0;j<=i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]  = temp;
                didswap = 1;
            }
        }
        if(didswap==0){
            break;
        }
    }
}
// insertion sort time complexity worst or avg = o(n*n) best = o(n)
// sort element one by one placing each element in its correct position.
// divide array into sorted and unsorted array.

void insertion_sort(int arr[],int n){
    for(int i = 0; i<=n-1;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;

        }
    }
}
int main(){
    int n;
    cin >>n;
    int arr[n];
    for (int i = 0;i<n;i++) cin >> arr[i];
    selection_sort(arr,n);
    bubble_sort(arr,n);
    insertion_sort(arr,n);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}