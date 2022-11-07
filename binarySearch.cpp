#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int left=0, right=n-1, mid;
    mid = (left+right)/2;
    for(int i=0; i<n; i++){
        
        if(key<arr[mid]){
            right = mid-1;
            mid = (left+right)/2;
        }
        else if(key>arr[mid]){
            left = mid+1;
            mid = (left+right)/2;
        }
        else if(arr[mid]==key){
            return mid;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr, n, key);
}