#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int r=1; r<=n; r++)
    {
        for(int space = 0; space<n-r; space++)
        {
            cout<<" ";
        }
        for(int c = r; c>=1; c--)
        {
            cout<<c;
        }
        for(int c = 2; c<=r; c++)
        {
            cout<<c;
        }
        cout<<endl;
    }


}

