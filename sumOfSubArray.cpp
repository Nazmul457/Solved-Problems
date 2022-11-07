#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum=0;//after every iteration we get a new subarray so we have recalculate the new sum for new array
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<" ";
        } 
    }
}