#include<bits/stdc++.h>
using namespace std;
// linear search means searching an element in an array by traversing the array from start to end.
// time complexitity  = O(n);
// adv  = works on both sorted and unsorted array.Simple and easy to understand.
// dis  = slow for large datasets. check elements one by one.
int main(){
    int n,arr[n],key;
    cin>>n;
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    for(int i = 0;i<n;i++){
        if(arr[i]==key){
            cout<<"element found at"<<" "<<i;
            return 0;
        }
    }
    cout<<"element not found";
    return 0;
}
// Binary search means searching an element in a sorted array by dividing the array into two halves and checking the middle element.
// time complexity = O(log n);
// adv  = faster for large datasets. efficient for sorted arrays.
// dis  = only works on sorted arrays. more complex than linear search.
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid; // Element found
        }
        if (arr[mid] < key) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found
}
int main() {
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> key;
    int result = binarySearch(arr, n, key);
    if (result != -1) {
        cout << "Element found at index " << result;
    } else {
        cout << "Element not found";
    }
    return 0;
}

