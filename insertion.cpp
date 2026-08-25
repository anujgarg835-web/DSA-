#include<bits/stdc++.h>
using namespace std;
// insertion means add a new a new element at a particular position in an array.
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int value;
    cin >> value;
    // Shifting elements to next position for insertion at first place.
    for(int i=n;i>0;i--){
        arr[i] = arr[i-1];

    }
    arr[0]  = value;
    n++;
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}

// insert element at last.
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int value;
    cin>> value;
    arr[n] = value;
    n++;
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}
// insertion at any position .
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int value,pos;
    cin>>value>>pos;
    for(int i=n;i>pos-1;i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1]  = value;
    n++;
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}