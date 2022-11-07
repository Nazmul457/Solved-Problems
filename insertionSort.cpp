#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int curr=arr[i];//porer element k copy kore rakhlam
        int j=i-1;
        while(arr[j]>curr && j>=0){ //jodi ager element porer cheye boro hoy
            arr[j+1]=arr[j];//ager element k porer ghore niye gelam
            j--;
        }
        arr[j+1]=curr;//porer ghorer element k ager ghore niye ashlam
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}