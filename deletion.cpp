#include<bits/stdc++.h>
using namespace std;
// deletion at begining.
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    // shift to left
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    n--;
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// deletion at end.
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    n--;
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
// deletion at any position.
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int pos;
    cin>>pos;
    // shift elements to left.
    for(int i =pos-1;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    n--;
    for(int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}